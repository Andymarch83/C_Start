#include <stdio.h>
int main() {
	int number, reversed_number = 0;
	scanf("%d", &number);
	while (number != 0){
		reversed_number = reversed_number * 10 + number % 10;
		number /= 10;
    }
    printf("%d", reversed_number);
    return 0;
}
