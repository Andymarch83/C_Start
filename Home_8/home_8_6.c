/*Задача 6. Больше среднего
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.*/

#include <stdio.h>

int main() {
    int matrix[5][5];
    int main_diagonal_sum = 0;
    int main_diagonal_count = 0;
    int max_diagonal_sum = 0;
    int max_diagonal_count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                main_diagonal_sum += matrix[i][j];
                main_diagonal_count++;
            }
            if (matrix[i][j] > 0 && matrix[i][j] > (main_diagonal_sum / main_diagonal_count)) {
                max_diagonal_sum += matrix[i][j];
                max_diagonal_count++;
            }
        }
    }
    printf("Count: %d\n", max_diagonal_count);
    return 0;
}




