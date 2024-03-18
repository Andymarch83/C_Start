/*Задача 5. Вторая с конца ноль
Считать массив из 10 элементов и отобрать в другой массив все числа, у
которых вторая с конца цифра (число десятков) – ноль.
*/

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

void new_array(int arr[], int count)
{	
	int j = -1, k, new_arr[count];
    for(int i = 0; i < count; i++) 
    {
        k = arr[i] / 10;
        if(k % 10 == 0) {
            j++;
            new_arr[j] = arr[i];
        }
    }
    if(j == -1)
        printf("NO\n");
    else {
		print_array(new_arr, j+1);
    }
}

int main() 
{
	int numbers[COUNT];
	init_array(numbers, COUNT);
	print_array(numbers, COUNT);
	new_array(numbers, COUNT);
	return 0;
}

