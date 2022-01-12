#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int FPB (int a, int b) {
    if(b == 0) {
        return a; //base case
    } else {
        return FPB(b, a%b); //recursive case
    }
}

int main () {
    int T, M, N, faktor;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++) {
        faktor = 0;
        scanf("%d %d", &M, &N);
        faktor = FPB(M, N);
        printf("GCD of %d and %d is: %d\n", M, N, faktor);
    }
    return 0;
}
