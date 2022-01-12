#include <stdio.h>

int hitung(int a){
    int hasil = 0;
    int indeks = 1;
    if(a%2 != 0){
        a -= 1;
    }
    if(a >= 4){
        for(int i=0; i<(a/2)-1 ; i++){
            hasil += indeks;
            indeks += 1;
        }
    }
    return hasil;
}
int main() {
    int T;
    scanf("%d",&T);

    int N[T];
    for(int i=0; i<T; i++){
        scanf("%d",&N[i]);
    }
    for(int j=0; j<T; j++){
        printf("%d\n",hitung(N[j]));
    }
}
