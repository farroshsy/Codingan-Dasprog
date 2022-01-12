#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    
    if(a > 0 && b > 0) {
        printf("Kuadran 1");
    }else if(a < 0 && b > 0) {
        printf("Kuadran 2");
    }else if(a < 0 && b < 0) {
        printf("Kuadran 3");
    }else if(a > 0 && b < 0) {
        printf("Kuadran 4");
    }else if(b == 0){
        printf("Sumbu x");
    }else if(a == 0){
        printf("Sumbu y");
    }
    return 0;
}


