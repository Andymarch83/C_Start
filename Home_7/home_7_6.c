/*Задача 6. Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.
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

int max_num_array(int arr[], int count)
{	
	int max_cnt = 0;
	int max_num = 0;
	int cnt = 0;
	for(int i = 0; i < 10; i++) 
	{
        for(int j = i + 1; j < 10; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                cnt++;
            }
        }
        if(cnt > max_cnt) 
        {
            max_cnt = cnt;
            max_num = arr[i];
        }
    }
    return max_num;
}

int main() 
{
	int numbers[COUNT];
	init_array(numbers, COUNT);
	print_array(numbers, COUNT);
	printf("%d", max_num_array(numbers, COUNT));
	return 0;
}

