/*Задача 3. Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.*/

#include <stdio.h>

const static int COUNT = 12;
void init_array(int arr[], int count)
{
  for (int i = 0; i < count; ++i)
  {
    scanf("%d", &arr[i]);
  }
}

void print_array(int arr[], int count)
{
	printf("Array: [ ");
	for(int i = 0; i < count; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("]");
	printf("\n");

}

void shift_array(int arr[], int count)
{
	int k;
	printf("Input shift = ");
	scanf("%d", &k);
	k = k % count;
	int tmp;
 	for(int j = 1; j <= k; j++)
	{
		tmp = arr[count-1];
		for(int i = count-1; i >= 0; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = tmp;
	}
	print_array(arr, count);
}

int main() 
{
	int numbers[COUNT];
	init_array(numbers, COUNT);
	print_array(numbers, COUNT);
	shift_array(numbers, COUNT);
	return 0;
}

