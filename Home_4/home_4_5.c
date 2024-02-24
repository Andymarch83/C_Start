#include <stdio.h>

int main() {
	int number, i, sum, product;
	scanf("%d", &number);
	for (i = 10; i <= number; i++) {
		sum = 0;
		product = 1;
		while (i > 0) {
			sum += i % 10;
			product *= i % 10;
			i /= 10; 
		}
		if (sum == product && i <= number) {
			printf("%d\n", i);
		}
	}
	return 0;
}








