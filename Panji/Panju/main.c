#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char nama[150][25],temp[25];
    unsigned long long i,j,t,l,N;
    scanf("%llu",&N);
        for(i=0;i<=N;i++){
            scanf(" %[^\n]s", nama[i]);
        }

        for(j=0;j<=N;j++){
            for(t=j+1; t <= N;t++){
                if(strcmp(nama[j],nama[t])>0){
                    strcpy(temp,nama[j]);
                    strcpy(nama[j],nama[t]);
                    strcpy(nama[t],temp);
                }
            }
        }
    printf("Daftar Nama:\n");
        for(l=1; l<=N ;l++){
            printf("%llu. ",l);
            printf("%s\n",nama[l]);
        }
}


