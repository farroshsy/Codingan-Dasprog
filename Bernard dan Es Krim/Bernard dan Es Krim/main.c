#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long T, N, K, i, j, x, y, total, jumlah;
    scanf("%llu",&T);
        for(i=0; i< T; i++){
            scanf("%llu %llu",&N,&K);
            jumlah = 0;
                for(j = N; j >= K ; j =(x+y)){
                    x = j / K;
                    y = j % K;
                    jumlah += x;
                }
            total = jumlah + N;
            printf("%llu\n",total);
        }
}
