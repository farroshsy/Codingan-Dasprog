#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);

    if((a >= 0 && a < 9223372036854775808) && ((b >= 0) && (b < 9223372036854775808))) {
        printf("%llu", a + b);
    } else if((a == 9223372036854775808) && (b == 9223372036854775808)) {
        printf("18446744073709551616");
    }
    return 0;
}
