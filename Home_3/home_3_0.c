#include <stdio.h>
int main(int argc, char **argv)
{
	int a = 9, b = 3;
	printf("%d", (a*=b)+(b*=a));
	return 0;
}
