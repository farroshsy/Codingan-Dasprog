#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, x;
    printf("input nilai: ");
    scanf("%d", &n);
    printf("Fibonacci: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        x = t1 + t2;
        t1 = t2;
        t2 = x;
    }

    return 0;
}
