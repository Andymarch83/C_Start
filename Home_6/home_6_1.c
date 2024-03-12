#include <stdio.h>
void revRec(int num)
{
	if(num == 0)
		return;
	revRec(num/10);
	printf("%d ", num%10);
}
int main() {
	int n;
	scanf("%d", &n);
	revRec(n);
	return 0;
}

