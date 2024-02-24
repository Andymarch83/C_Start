#include <stdio.h>
int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	int count=0;
	while (a>0){
		a=a/10;
		count++;
	}
printf("%s", count==3? "YES":"NO");
	return 0;
}
