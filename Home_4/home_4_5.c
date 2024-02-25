#include <stdio.h>

int main() {
	int number, i, sum, product, currentNum;
	scanf("%d", &number);
	for (i = 10; i <= number; i++) {
		sum = 0;
		product = 1;
        currentNum = i;
		while (currentNum > 0) {
			sum += currentNum % 10;
			product *= currentNum % 10;
			currentNum /= 10; 
		}
		if (sum == product && currentNum <= number) {
			printf("%d\n", currentNum);
		}
	}
	return 0;
}








