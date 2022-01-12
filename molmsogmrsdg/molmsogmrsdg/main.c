#include<stdio.h>

int main() {
    int N,i,j,k;
    
    printf("Input panjang diagonal N : ");
    scanf("%d",&N);
    
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=N-i;++j)
        {
            printf(" "); }
    for(k=0;k<=2*i;k++) {
        printf("*"); }
    printf("\n");
    }
    
    for(i=0;i<=N;i++)
    {
        for(j=N;j>=N-i;j--)
        {
            printf(" "); }
        for(k=2*(N-i);k>=0;k--) {
            printf("*");
        }
        printf("\n");
    }
}

