/*Задача 1. Среднее арифметическое чисел
 Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
всех элементов массива.*/
 
#include <stdio.h>

const static int COUNT = 5;
float mid(int arr[], int count)
{
	float sum = 0;
	float res;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &arr[i]);
		sum += arr[i]; 
	}
	return res = (sum / count)*1.0;
}
int main() 
{
	int numbers[COUNT];
	printf("%.3f", mid(numbers, COUNT));
	return 0;
}
