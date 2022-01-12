#include <stdio.h>

int main() {

   double n, i;       // jumlah iterasi dan variabel kontrol
   double s = 1;      // sinyal untuk iterasi selanjutnya
   double phi = 0;

   printf("Masukkan jumlah iterasi > ");
   scanf("%lf",&n);

   for(i = 1; i <= (n * 2); i += 2){
     phi = phi + s * (4 / i);
     s = -s;
   }

   printf("Estimasi Nilai Pi = %lf\n", phi);
}
