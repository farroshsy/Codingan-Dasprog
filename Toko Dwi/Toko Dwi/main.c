#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void check(int t, int bil[]);
void swap(int *a, int *b);

int main () {
    int N;
    int K[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &K[i]);
    }
    for (int j = 0; j < N; j++) {
        for (int d = 0; d <= j; d++) {
            if (j == 0) {
                printf("%d ", K[j]);
            } else {
                check(j,K);
                printf("%d ", K[d]);
            }
        }
        printf("\n");
    }
    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void check(int t, int bil[]){
    int l = t - 1;
    while(l >= 0 && l < t) {
        if(bil[l] > bil[t]) {
            swap(&bil[l], &bil[t]);
        }
        l--;
        t--;
    }
}



