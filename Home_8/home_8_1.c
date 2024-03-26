/*Задача 1. Сортировка по возрастанию
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не
надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[])
Всю программу загружать не надо, только одну эту функцию. Можно просто
закомментировать текст всей программы, кроме данной функции.*/

#include <stdio.h>

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}



/*int main() 
{
	int size;
    int arr[100];

    printf("Input size: ");
    scanf("%d", &size);

    printf("Input numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sort_array(size, arr);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}
*/

