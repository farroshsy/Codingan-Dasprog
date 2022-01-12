#include <stdio.h>

void double_trouble(int *p, int y);
void trouble(int *x, int *y);

int
main(void)
{
    int x, y;
    trouble(&y, &x);
    printf("x = %d, y = %d\n", x, y);
    return (0);
}

void
double_trouble(int *p, int y)
{
    int x;
    x = 10;
    *p = 10 * x - y;
}

void
trouble(int *x, int *y)
{
    double_trouble(y, *x);
    double_trouble(x, 10);
}
 /* outputnya x = -32666, y = 90
 fungsi main adalah merupakan sebuah titik awal dan titik akhir eksekusi program
  fungsi trouble adalah sebagai pengganti integer int
  fungsi double_trouble adalah pengganti floating double
  */

