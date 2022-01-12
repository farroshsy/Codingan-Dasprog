#include <stdio.h>

int main()
{
    double i,N,jumlah;
    double rata;
    printf("Input suku ke N: ");
    scanf("%lf",&N);
    
    jumlah=0;
     
    for(i=1;i<=N;i++){
        jumlah = jumlah + i;
    }
    
    rata = jumlah/N;
    printf("Jumlah penjumlahan sampai suku ke N adalah %lf, dan rata ratanya adalah %lf\n", jumlah, rata);
    return 0;
}
