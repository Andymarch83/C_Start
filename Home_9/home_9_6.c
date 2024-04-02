#include <stdio.h>
#include <string.h>

int main() {
    FILE  * inFile,  * outFile;
    char line[1001]; // Предполагаем, что предложение не превышает 1000 символов
    int count = 0;

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

    // Чтение предложения из файла
    if (fgets(line, sizeof(line), inFile)) {
        // Разделение предложения на слова
        char  * token = strtok(line, " ");
        while (token != NULL) {
            // Проверка, заканчивается ли слово на букву 'а'
            if (strcmp(token + strlen(token) - 1, "a") == 0) {
                count++;
            }
            // Получение следующего слова
            token = strtok(NULL, " ");
        }
    }

    // Запись количества слов, заканчивающихся на 'а', в файл
    fprintf(outFile, "%d", count);

    // Закрытие файлов
    fclose(inFile);
    fclose(outFile);

    return 0;
}
