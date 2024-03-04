#include <stdio.h>

int rice(int n) {
    int res = 1;   
    for (int i=2; i<=n; i++) {
		res *= 2;
	}
	return res;
}
int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	printf("%d", rice(a));
	return 0;
}
