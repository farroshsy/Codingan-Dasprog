#include <stdio.h>
#include <stdbool.h>

int main()
{
    int dua = 2;
    int a = ++dua + 5 + dua--;
    printf("%d", a);
    a = 3 << 1 % 7 >> 1;
    printf("%d\n", a);
}
