#include <stdio.h>
#include <stdbool.h>

int N;
int pernah[10],catat[10];
void tulis(int kedalaman);

int main() {
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        pernah[i] = 0;
    }
    tulis(1);
    return 0;
}

void tulis(int kedalaman){
    int i,zigzag;
    if(kedalaman > N){
        zigzag = 1;
        for(i = 2; i <= N-1; i++){
            if(!(((catat[i] > catat[i-1]) && (catat[i] > catat[i+1])) || ((catat[i] < catat[i-1]) && (catat[i] < catat[i+1])))){
                zigzag = 0;
            }
        }
        if(zigzag){
            for(int i = 1; i <= N; i++){
                printf("%d",catat[i]);
            }
            printf("\n");
        }
    }
    else{
        for(int i = 1; i <= N; i++){
            if(!pernah[i]){
                pernah[i] = 1;
                catat[kedalaman] = i;
                tulis(kedalaman+1);
                pernah[i] = 0;

            }
        }
    }
}

