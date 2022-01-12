#include <stdio.h>
#include <string.h>
#define NUM_ADDRESSES 100 /* Angka Maksimum Address yang diproses*/
#define NAMELENGTH 100 /* Panjang Nama Mesin Maksimum */

typedef struct{
    int xx, yy, zz, mm;
    char name[20];
}
address_t;
int fnLocalAddress(address_t first, address_t second);
void fnScanAddress(address_t *in); /* menggunakan pointer karena berupa fungsi inputan*/
void fnPrintAddress(address_t out);
int main(void)
{
    address_t data[NUM_ADDRESSES]; /*array stuktrur address*/
    int count; /* angka data point*/
    int testing; /* Untuk mengetes file*/
    int same_net; /* Menunjukkan apakah 2 machines berada di local net yang sama*/
    int i,j;
    count = 0;
    testing = 0;
    while(testing == 0 && count < NUM_ADDRESSES){
        fnScanAddress(&data[count]);
        if((data[count].xx == 0) && (data[count].yy == 0) && (data[count].zz == 0) && (data[count].mm == 0))
            testing = 1;
        else
            count++;
    }
/* Menentukan apakah berada di net yang sama*/
    for(i = 0; i < (count - 1); ++i) {
        for(j = (i+1); j < count; ++j) {
            same_net = fnLocalAddress(data[i], data[j]);
            if(same_net == 1)
                printf("Manchines %s and %s are on the same local network.\n", data[i].name, data[j].name);
        }
    }
    for(i = 0; i < count; ++i)
    fnPrintAddress(data[i]);
    return(0);
}
/* Fungsi untuk mengetes apakah address berada di input parameter yang sama, jika iya return(1), jika tidak return(0)*/
int fnLocalAddress(address_t first, address_t second) {
    if((first.xx == second.xx) && (first.yy == second.yy))
        return(1);
    else return(0);
}
/* fungsi fnScanAddress untuk membaca inputan dan fnPrintAddress untuk mengulaarkan output*/
void fnScanAddress(address_t *in)
{
    scanf("%d.%d.%d.%d%s",&(*in).xx, &(*in).yy, &(*in).zz, &(*in).mm, (*in).name);
}
void fnPrintAddress(address_t out)
{
    printf("%d.%d.%d.%d\t%s\n", out.xx, out.yy, out.zz, out.mm, out.name);
}
