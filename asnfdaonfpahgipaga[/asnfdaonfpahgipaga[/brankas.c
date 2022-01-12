#include <stdio.h>

int N,K;
int catat[100];
void tulis(int kedalaman);

int main() {
    scanf("%d %d",&K,&N);
    tulis(1);
}

void tulis(int kedalaman){
    int i;
    if(kedalaman > N){
        for(i = 1; i <= N; i++){
            printf("%d ",catat[i]);
        }
        printf("\n");
    }
    else{
        for(int i = catat[kedalaman-1]+1; i <= K; i++ ){
            catat[kedalaman] = i;
            tulis(kedalaman + 1);
        }
    }
}
