/*Задача 2. Найти минимум
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
*/
 
#include <stdio.h>
#include <limits.h>
const static int COUNT = 5;
int min_num(int arr[], int count)
{
	int min = INT_MAX;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &arr[i]);
		if(arr[i] < min)
		{ 
			min = arr[i];
		}
	}
	return min;
}
int main() 
{
	int numbers[COUNT];
	printf("%d ", min_num(numbers, COUNT));
	return 0;
}
