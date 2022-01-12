#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,N,Q,O,A,B,x,y,z,n = N,jumlah;
    scanf("%d",&T);
        for(x = 0; x < T; x++){
        scanf("%d %d",&N,&Q);
        int p[N];
        for(z = 0; z < N; z++){
            p[z]= 0;
        }
            for(y = 0 ; y < Q; y++){
                scanf("%d %d %d",&O,&A,&B);
                jumlah = 0;
                    if(O == 0){
                        while(A <= B){
                            if(p[A] == 0){
                                p[A]++;
                            }
                            else if(p[A] == 1){
                                p[A]--;
                            }
                            A++;
                        }
                    }
                    else if(O == 1){
                        while(A <= B){
                            if(p[A] == 1){
                                jumlah ++;
                            }
                            A++;
                        }
                        printf("%d\n",jumlah);
                    }
            }
        }
return 0;
}
