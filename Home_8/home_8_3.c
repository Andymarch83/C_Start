/*Задача 3. Максимум в массиве
Написать только одну функцию, которая находит максимальный элемент в
массиве. Всю программу загружать не надо.
Прототип функции: int find_max_array(int size, int a[])*/

#include <stdio.h>

int find_max_array(int size, int a[]) {
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}




/*int main() 
{
	int n;
    int arr[100];

    printf("Input size: ");
    scanf("%d", &n);

    printf("Input numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element in the array: %d\n", find_max_array(n, arr));
    

	return 0;
}
*/
