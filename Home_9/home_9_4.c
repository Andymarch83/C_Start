#include <stdio.h>
#include <string.h>

int main() {
    FILE  * inputFile = fopen("input.txt", "r");
    FILE  * outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("File open error");
        return 1;
    }

    char line[1001]; // Максимальный размер строки 1000 символов + символ конца строки
    while (fgets(line, sizeof(line), inputFile)) {
        // Удаляем пробелы в начале и конце строки
        char  * trimmedLine = strtok(line, " \n");

        // Удаляем повторяющиеся символы
        for (int i = 0; trimmedLine[i] != '\0'; ++i) {
            int found = 0;
            for (int j = i + 1; trimmedLine[j] != '\0'; ++j) {
                if (trimmedLine[i] == trimmedLine[j]) {
					found = 1;
                    break;
                }
            }
            if (!found) {
                fputc(trimmedLine[i], outputFile);
            }
        }
        fputc('\n', outputFile); // Добавляем перевод строки в конец строки
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
