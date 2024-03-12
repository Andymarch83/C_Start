#include <stdio.h>

int num_power(int n, int p) 
{
    if (p == 0) 
    {
        return 1;
    } 
    else if (p % 2 == 0) 
    {
        return num_power(n * n, p / 2);
    } 
    else 
    {
        return n * num_power(n * n, p / 2);
    }
}

int main() {
    int a, b;
	scanf("%d %d", &a, &b);
    printf("%d\n", num_power(a, b));
    return 0;
}

