#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    int nilai;
    char nama[60];
    char temp2[100];
}
    siswa[5005],temp;


void rollvalue(int i, int j){
    temp = siswa[j];
    siswa[j]=siswa[i];
    siswa[i]=temp;
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
        scanf("%d %s",&siswa[i].nilai,siswa[i].nama);
    }
    for(k = 0; k < N; k++){
        p1 = k;
        for (j=k-1; j >= 0; j--){
            p2 = j;
            while(p1 > 0){
                if (siswa[p1].nilai > siswa[p2].nilai){
                    rollvalue(p1,p2);
                }
                p1--;p2--;
            }
        }
    }
    for(k=0; k < N-1; k++){
        for(l=k+1; l < N; l++){
            int P = strcmp(siswa[k].nama,siswa[l].nama);
            if( P > 0 && (siswa[k].nilai == siswa[l].nilai))
            rollname(&siswa[k],&siswa[l]);
        }
    }
     
    for (l=0; l<N; l++){
        printf("%d %s\n",siswa[l].nilai,siswa[l].nama);
    }
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

/*struct data{
    int nilai;
    char nama[1000];
    char temp2[50];
};
struct data mahasiswa[1000];
struct data temp;

void swap(int i, int j){
    temp = mahasiswa[j];
    mahasiswa[j]=mahasiswa[i];
    mahasiswa[i]=temp;
}
void TN(struct data *a,struct data *b){
    struct data temp2;
    temp2 = *a;
    *a = *b;
    *b = temp2;
}
int main(){
    int t,i,j,k,l,p1,p2;
    scanf("%d",&t);
    for (i=0; i<t; i++){
        scanf("%d %s",&mahasiswa[i].nilai,mahasiswa[i].nama);
    }
    for(k = 0; k < t; k++){
        p1 = k;
        for (j=k-1; j >= 0; j--){
            p2 = j;
            while(p1 > 0){
                if (mahasiswa[p1].nilai > mahasiswa[p2].nilai){
                    swap(p1,p2);
                }
                p1--;
                p2--;
            }
        }
    }
    for(k=0; k < t-1; k++){
        for(l=k+1; l < t; l++){
            int P = strcmp(mahasiswa[k].nama,mahasiswa[l].nama);
            if( P > 0 && (mahasiswa[k].nilai == mahasiswa[l].nilai))
            TN(&mahasiswa[k],&mahasiswa[l]);
        }
    }
     
    for (l=0; l<t; l++){
        printf("%d %s\n",mahasiswa[l].nilai,mahasiswa[l].nama);
    }
} */
