#include <stdio.h>

void print_numbers_b(int a, int b) 
{
    if (a < b) 
    {
		printf("%d ", a);
		print_numbers_b(a + 1, b);
		if (a > b) 
		{
        return;
		} 
	}
	else 
	{
		printf("%d ", a);
	}
    
}

void print_numbers_a(int a, int b) 
{
    if (a > b) 
    {
		printf("%d ", a);
		print_numbers_a(a - 1, b);
		if (a < b) 
		{
        return;
		} 
	}
	else 
	{
		printf("%d ", a);
	}
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    (a < b)? print_numbers_b(a, b): print_numbers_a(a, b);
    return 0;
}

