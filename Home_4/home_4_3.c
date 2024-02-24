#include <stdio.h>
int main() {
	int number;
	scanf("%d", &number);
	int is_even = 1;
	while (number>0){
		int last_digit = number % 10;
		if (last_digit%2!=0) {
			is_even = 0;
			break;
		}
		number /= 10;
    }

    if (is_even) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
