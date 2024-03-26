/*Задача 4. Два одинаковых
Написать только одну логическую функцию, которая определяет, верно ли, что
среди элементов массива есть два одинаковых. Если ответ «да», функция
возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);*/

#include <stdio.h>

int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1;
            }
        }
    }
    return 0;
}

/*int main() {
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int a[size];
    printf("Input number: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int result = is_two_same(size, a);
    printf("%s\n", result ? "YES" : "NO");
    return 0;
}
*/




