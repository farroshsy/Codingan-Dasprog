#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, z1, z2, z3, sudut;
    scanf("%d %d %d", &x1, &x2, &x3);
    scanf("%d %d %d", &y1, &y2, &y3);
    scanf("%d %d %d", &z1, &z2, &z3);
    scanf("%d", &sudut);
    
    if(sudut == 90) {
        printf("%d %d %d\n", z1, y1, x1);
        printf("%d %d %d\n", z2, y2, x2);
        printf("%d %d %d\n", z3, y3, x3);
    } else if(sudut == 180) {
        printf("%d %d %d\n", z3, z2, z1);
        printf("%d %d %d\n", y3, y2, y1);
        printf("%d %d %d\n", x3, x2, x1);
    } else if(sudut == 270) {
        printf("%d %d %d\n", x3, y3, z3);
        printf("%d %d %d\n", x2, y2, z2);
        printf("%d %d %d\n", x1, y1, z1);
    } else if(sudut == 360) {
        printf("%d %d %d\n", x1, x2, x3);
        printf("%d %d %d\n", y1, y2, y3);
        printf("%d %d %d\n", z1, z2, z3);
    }
    return 0;
}
