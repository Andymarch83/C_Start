#include <stdio.h>


int sum_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n",sum_numbers(n));

    return 0;
}

