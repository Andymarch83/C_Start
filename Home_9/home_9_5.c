#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE  * inFile,  * outFile;
    char line[1001]; // Предполагаем, что максимальная длина слова не превышает 1000 символов
    int maxLength = 0;
    char longestWord[1001];
    
    // Открытие файлов для чтения и записи
    inFile = fopen("input.txt", "r");
    if (!inFile) {
        perror("Ошибка при открытии файла");
        return 1;
    }
    outFile = fopen("output.txt", "w");
    if (!outFile) {
        perror("Ошибка при создании файла");
        fclose(inFile);
        return 1;
    }
    
    // Чтение входного файла построчно
    while (fgets(line, sizeof(line), inFile)) {
        // Удаление символа новой строки, если он есть
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }
        
        // Разделение строки на слова
        char  * token = strtok(line, " ");
        while (token != NULL) {
            // Проверка длины текущего слова
            int length = strspn(token, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ");
            
            // Если слово длиннее предыдущего самого длинного слова, обновляем данные
            if (length > maxLength) {
                maxLength = length;
                strcpy(longestWord, token);
            }
            
            // Получение следующего слова
            token = strtok(NULL, " ");
        }
    }
    
    // Вывод самого длинного слова в выходной файл
    fprintf(outFile, "%s", longestWord);
    
    // Закрытие файлов
    fclose(inFile);
    fclose(outFile);
    
    return 0;
}
