#include <stdio.h>


int number(int n) {
    int sum = 0, product = 1, temp;

    while (n > 0) {
        temp = n % 10;
        sum += temp;
        product  *= temp;
        n /= 10;
    }

    if (sum == product) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
	number(n)? printf("YES") : printf("NO"); 
    

    return 0;
}
