#include <stdio.h>

int main(void) {
	int a; 
	scanf("%d",&a);
	printf("%.2f", (a/1000+(a-a/1000*1000)/100+a%100/10+a%10)/4.); 

	return 0;
}
