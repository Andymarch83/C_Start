#include <stdio.h>

int main() {
    char str[1000];
    int stack[1000];
    int top = -1;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            stack[++top] = i;
        } else if (str[i] == ')') {
            if (top == -1) {
                printf("NO\n");
                return 0;
            }
            if (str[stack[top]] == '(') {
                top--;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }

    if (top == -1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

