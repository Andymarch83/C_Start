#include <stdio.h>

void recursion(int n) 
{
    int input;
    scanf("%d", &input);
    if (input == 0) 
		return;
	if (input % 2 == 1) 
	{
        printf("%d ", input);
        recursion(input - 1);
    } 
    else 
    {
		recursion(input - 1);
    }
}


int main() {
    recursion(1); 
    return 0;
}

