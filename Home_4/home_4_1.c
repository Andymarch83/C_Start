#include <stdio.h>
int main(int argc, char **argv)
{
	int i,a,b;
	scanf("%d%d",&a,&b);
	int sum = 0;
	for (i =a; i <= b; i++) {
		sum += i*i;
	}
	printf("%d", sum);
	return 0;
}
