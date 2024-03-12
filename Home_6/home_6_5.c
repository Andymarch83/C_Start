#include <stdio.h>

int acounter(void) {
    int c;
    int count = 0;

    while ((c = getchar()) != '.') {
        if (c == 'a') {
            count++;
        }
    }

    return count;
}

int main() {
    printf("%d\n", acounter());
    return 0;
}

