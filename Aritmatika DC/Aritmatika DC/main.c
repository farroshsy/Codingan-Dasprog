#include <stdio.h>
#include <math.h>

int main() {
 unsigned long long u1, u2, u3, u4, u5, u6, un, n;
 unsigned long long beda1, beda2, beda3, beda4;
 unsigned long long a, b, c, d;
 unsigned long long DC1, DC2, DC3;
 scanf("%llu %llu %llu %llu %llu", &u1, &u2, &u3, &u4, &u5);
 scanf("%llu", &n);
 
 beda1 = u2 - u1;
 beda2 = u3 - u2;
 beda3 = u4 - u3;
 beda4 = u5 - u4;
 
 DC1 = beda2 - beda1;
 DC2 = beda3 - beda2;
 DC3 = beda4 - beda3;
 
 if ((u3 - u2)==(u2 - u1)) { // tingkat satu
  u6 = u1 + (5 * beda1);
  un = u1 + (n-1) * beda1;
  printf("%llu\n", u6);
  printf("%llu", un);
 }   else if ((beda2 - beda1)==(beda3 - beda2)) { // tingkat dua
    a = (beda2 - beda1)/ 2;
    b = beda1 - (3 * a);
    c = u1 - b - a;
    u6 = (a * 6 * 6) + (b * 6) + c;
    un = (a * n * n) + (b * n) + c;
    printf("%llu\n", u6);
    printf("%llu", un);
 } else if ((DC2-DC1)==(DC3-DC2)) { //tingkat tiga
  a = (DC2 - DC1)/ 6;
  b = (DC1 - 12 * a)/ 2;
  c = beda1 - 7 * a - 3 * b;
  d = u1 - a - b - c;
  u6 = (a * 6 * 6 * 6) + (b * 6 * 6) + (c * 6) + d;
  un = (a * n * n * n) + (b * n * n) + (c * n) + d;
  printf("%llu\n", u6);
  printf("%llu", un);
 }
}


