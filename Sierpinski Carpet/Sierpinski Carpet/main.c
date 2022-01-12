#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a, t, lebar = 1, d;
    int s = n;
 
    for (a = 0; a < s; a++){
        lebar *= 3;
    }
    for (a = 0; a < lebar; a++) {
        for (t = 0; t < lebar; t++) {
            for (d = lebar / 3; d; d /= 3)
                if ((a % (d * 3)) / d == 1 && (t % (d * 3)) / d == 1)
                    break;
            printf(d ? " " : "#");
        }
        printf("\n");
    }
    return 0;
}
