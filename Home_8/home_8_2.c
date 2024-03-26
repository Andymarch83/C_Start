/*Задача 2. Четные в начало
Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])*/

#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int i, j, temp;

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            for (j = i; j > 0 && a[j - 1] % 2 == 1; j--) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    for (i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 1) {
            for (j = i; j < n - 1 && a[j + 1] % 2 == 0; j++) {
                temp = a[j];
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
    sort_even_odd(size, arr);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

	return 0;
}
*/
