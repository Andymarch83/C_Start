/*Задача 4. Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре.*/

#include <stdio.h>

const static int COUNT = 10;
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
		printf("%d ", arr[i]); 
	}
	printf("]");
	printf("\n");

}

void sort_array(int arr[], int count)
{
	 for (int i = 1; i < count-1; i++)
	 {
		for (int j = 0; j < count - i; j++)
		{
			if (arr[j] % 10 > arr[j + 1] % 10)
			{
				arr[j] = arr[j] + arr[j + 1];

				arr[j + 1] = arr[j] - arr[j + 1];

				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}
    print_array(arr, count);
}

int main() 
{
	int numbers[COUNT];
	init_array(numbers, COUNT);
	print_array(numbers, COUNT);
	sort_array(numbers, COUNT);
	return 0;
}

