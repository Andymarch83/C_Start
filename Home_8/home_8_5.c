/*Задача 5. Поменять местами
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[]);*/

#include <stdio.h>

void change_max_min(int size, int a[]) {
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (a[i] == min) {
            a[i] = max;
        } else if (a[i] == max) {
            a[i] = min;
        }
    }
}

/*
 int main() {
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int a[size];
    printf("Input number: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    change_max_min(size, a);
    printf("change_max_min: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
*/






