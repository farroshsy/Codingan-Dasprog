#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
void urutan(int l,int bil[]){
    int m = l-1;
        while(m >= 0 && m <l){
            if(bil[m] > bil[l]){
                swap(&bil[m],&bil[l]);
            }
            m--;
            l--;
        }
}
int main() {
    int angka[100];
    int N;
    scanf("%d",&N);
        for(int i = 0; i < N; i++){
            scanf("%d",&angka[i]);
        }
        for(int j = 0; j < N; j++){
            for(int k = 0; k <= j; k++){
                if(j == 0){
                    printf("%d ",angka[k]);
                }
                else if( j > 0){
                    urutan(j,angka);
                    printf("%d ",angka[k]);
                }
            }
            printf("\n");
        }
        
    return 0;
}
