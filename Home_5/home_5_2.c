#include <stdio.h>

int gcd(int m, int n){
	while (m != n){
        if (m > n){
            m = m - n;
        }    
        else
            n = n - m;
    return n;
    }
}

int main(int argc, char **argv) {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
	return 0;
}
