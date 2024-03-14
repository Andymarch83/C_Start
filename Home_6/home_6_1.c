#include <stdio.h>
void printNumbers(int num)
{
	if(num == 0)
		return;
	printNumbers(num/10);
	printf("%d ", num%10);
}
int main() {
	int n;
	scanf("%d", &n);
	printNumbers(n);
	return 0;
}

