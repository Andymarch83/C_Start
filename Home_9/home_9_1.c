#include <stdio.h>
#include <string.h>

// Функция для сравнения двух символов
int compare_chars(const void  * a, const void  * b) {
    return ( * (char  * )a -  * (char  * )b);
}

int main() {
    FILE  * input = fopen("input.txt", "r"); // Открываем файл для чтения
    FILE  * output = fopen("output.txt", "w"); // Открываем файл для записи результатов

    if (input == NULL || output == NULL) {
        perror("File open error");
        return 1;
    }

    char word1[101], word2[101]; // Массивы для хранения слов
    int count1[256] = {0}, count2[256] = {0}; // Массивы для подсчета символов

    // Читаем первое слово
    fscanf(input, "%100s ", word1);
    // Читаем второе слово
    fscanf(input, "%100s ", word2);

    // Подсчитываем символы первого слова
    for (int i = 0; word1[i] != '\0'; ++i) {
        count1[word1[i]]++;
    }

    // Подсчитываем символы второго слова
    for (int i = 0; word2[i] != '\0'; ++i) {
        count2[word2[i]]++;
    }

    // Создаем массив для хранения уникальных символов
    char unique_chars[256];
    memset(unique_chars, 0, sizeof(unique_chars));

    // Перебираем символы первого слова
    for (int i = 'a'; i <= 'z'; ++i) {
        if (count1[i] == 1 && count2[i] == 1) {
            unique_chars[i] = 1;
        }
    }

    // Сортируем уникальные символы
    qsort(unique_chars, 256, sizeof(char), compare_chars);

    // Выводим отсортированные уникальные символы
    for (int i = 'a'; i <= 'z'; ++i) {
        if (unique_chars[i]) {
            fprintf(output, "%c", i);
            printf("%c", i);
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
