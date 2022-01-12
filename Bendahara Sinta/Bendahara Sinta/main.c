#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, seratus, limapuluh, duapuluh, sepuluh, limaribu, duaribu, seribu;
    scanf("%d", &x);
    
    seratus = x / 100;
    limapuluh = (x-(seratus*100))/50;
    duapuluh  = (x-(limapuluh*50)-(seratus*100))/20;
    sepuluh   = (x-(duapuluh*20)-(limapuluh*50)-(seratus*100))/10;
    limaribu  = (x-(sepuluh*10)-(duapuluh*20)-(limapuluh*50)-(seratus*100))/5;
    duaribu   = (x-(limaribu*5)-(sepuluh*10)-(duapuluh*20)-(limapuluh*50)-(seratus*100))/2;
    seribu    = (x-(duaribu*2)-(limaribu*5)-(sepuluh*10)-(duapuluh*20)-(limapuluh*50)-(seratus*100))/1;
    
    printf("%d lembar 100 ribuan\n", seratus);
    printf("%d lembar 50 ribuan\n", limapuluh);
    printf("%d lembar 20 ribuan\n", duapuluh);
    printf("%d lembar 10 ribuan\n", sepuluh);
    printf("%d lembar 5 ribuan\n", limaribu);
    printf("%d lembar 2 ribuan\n", duaribu);
    printf("%d lembar 1 ribuan\n", seribu);
    
    return 0;
}


