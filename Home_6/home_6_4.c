#include <stdio.h>

void recursion() 
{
    int input;
    scanf("%d", &input);
    if (input == 0) 
	return;
    if (input % 2 != 0) 
	{
        printf("%d ", input);
	} 
    recursion();
    
}


int main() {
    recursion(); 
    return 0;
}

