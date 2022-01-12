#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long proses(long long n, long long pola){
    long long alas,tinggi,tingkat;
    long long a = 1;
    long long b = 2;
    long long c = 1;
    alas = n;
    tinggi = n;
    tingkat = (a+(pola-1)*b)+((pola-1)*(pola-2)*c)/2;
        if(alas > 3 && tinggi > 3){
            pola++;
            return proses(n-2,pola);
        }
    return tingkat;
};

int main(){
    long long n,i,angka,hasil,pola;
    scanf("%lld",&n);
        for(i = 0; i < n; i++){
            pola = 0;
            scanf("%lld",&angka);
            hasil = proses(angka,pola);
            printf("%lld\n",hasil);
        }
}
