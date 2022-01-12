#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, T, K, A, a, B, b, C, c, D, d, E, e, F, f, bagi, sisa, hasil;
    scanf("%d", &T);
    for(int i = 0 ; i < T; i++) {
            scanf("%d", &N);
            scanf("%d",&K);
    
        bagi = N / K;
        sisa = N % K;
        
        A = bagi;
        a = sisa;
        
        B = A / K;
        b = A % K;
        
        C = B / K;
        c = B % K;
        
        D = C / K;
        d = C % K;
        
        E = D / K;
        e = D % K;
        
        F = E / K;
        f = E % K;
        
        hasil = a+b+c+d+e+f;
        
    printf("Jumlah digit bilangan %d pada basis %d adalah %d\n", N, K, hasil);
    }
    return 0;
}
