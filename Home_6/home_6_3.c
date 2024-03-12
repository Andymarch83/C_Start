#include <stdio.h>

int count_1(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2 == 1) ? 1 + count_1(n / 2) : count_1(n / 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", count_1(n));
    return 0;
}

