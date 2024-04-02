#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1000
#define MAX_NUMBERS 100

int main() {
    FILE  * inputFile,  * outputFile;
    char inputString[MAX_STRING_LENGTH + 1]; // Увеличиваем размер на 1 для нуль-терминатора
    int numbers[MAX_NUMBERS];
    int numberCount = 0;
    int currentNumber;
    int temp;

    // Открытие файлов для чтения и записи
    inputFile = fopen("input.txt", "r");
    if (!inputFile) {
        perror("File open error");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (!outputFile) {
        perror("File open error");
        fclose(inputFile);
        return 1;
    }

    // Чтение строки из файла
    fgets(inputString, MAX_STRING_LENGTH, inputFile);
    inputString[strcspn(inputString, "\n")] = 0; // Удаление символа новой строки

    // Поиск чисел в строке
    for (int i = 0; i < strlen(inputString); i++) {
        if (isdigit(inputString[i])) {
            currentNumber = 0;
            while (i < strlen(inputString) && isdigit(inputString[i])) {
                currentNumber = currentNumber  *  10 + (inputString[i] - '0');
                i++;
            }
            // Добавление числа в массив
            if (numberCount < MAX_NUMBERS) {
                numbers[numberCount++] = currentNumber;
            }
            i--; // Возвращаемся назад после добавления числа
        }
    }

    // Сортировка массива чисел
    for (int i = 0; i < numberCount; i++) {
        for (int j = i + 1; j < numberCount; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Вывод отсортированного массива в файл
    for (int i = 0; i < numberCount; i++) {
        fprintf(outputFile, "%d ", numbers[i]);
    }
    fprintf(outputFile, "\n");

    // Закрытие файлов
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
