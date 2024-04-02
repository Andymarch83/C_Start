#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE  * inputFile,  * outputFile;
    char buffer[1000]; // Предполагаем, что строка не превышает 1000 символов
    size_t bytesRead;

    // Открытие файлов для чтения и записи
    inputFile = fopen("input.txt", "r");
    if (!inputFile) {
        perror("File open error");
        return EXIT_FAILURE;
    }
    outputFile = fopen("output.txt", "w");
    if (!outputFile) {
        perror("File open error");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Чтение строки из файла
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), inputFile)) > 0) {
        // Замена всех букв 'a' на 'b' и наоборот
        for (size_t i = 0; i < bytesRead; ++i) {
            if (buffer[i] == 'a' ) {
                buffer[i] = 'b';
            } else if (buffer[i] == 'A') {
                buffer[i] = 'B';
            } else if (buffer[i] == 'b') {
                buffer[i] = 'a';
            } else if (buffer[i] == 'B') {
                buffer[i] = 'A';
            }
        }
        // Запись измененной строки в файл
        fwrite(buffer, 1, bytesRead, outputFile);
    }

    // Закрытие файлов
    fclose(inputFile);
    fclose(outputFile);

    return EXIT_SUCCESS;
}
