#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    int nilai;
    char nama[60];
    char temp2[100];
}
    mahasiswa[1000],temp;


void rollvalue(int i, int j){
    temp = mahasiswa[j];
    mahasiswa[j]=mahasiswa[i];
    mahasiswa[i]=temp;
}
void rollname(struct data *a,struct data *b){
    struct data temp2;
    temp2 = *a;
    *a = *b;
    *b = temp2;
}
int main(){
    int N,i,j,k,l,p1,p2;
    scanf("%d",&N);
    for (i=0; i<N; i++){
        scanf("%d %s",&mahasiswa[i].nilai,mahasiswa[i].nama);
    }
    for(k = 0; k < N; k++){
        p1 = k;
        for (j=k-1; j >= 0; j--){
            p2 = j;
            while(p1 > 0){
                if (mahasiswa[p1].nilai > mahasiswa[p2].nilai){
                    rollvalue(p1,p2);
                }
                p1--;p2--;
            }
        }
    }
    for(k=0; k < N-1; k++){
        for(l=k+1; l < N; l++){
            int P = strcmp(mahasiswa[k].nama,mahasiswa[l].nama);
            if( P > 0 && (mahasiswa[k].nilai == mahasiswa[l].nilai))
            rollname(&mahasiswa[k],&mahasiswa[l]);
        }
    }
     
    for (l=0; l<N; l++){
        printf("%d %s\n",mahasiswa[l].nilai,mahasiswa[l].nama);
    }
}
