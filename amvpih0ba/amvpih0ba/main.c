#include<stdio.h>
#include<stdlib.h>
int main()
{
    //inisialisasi variabel
    int jum_baris = 5,spasi = jum_baris;
    int pascal[jum_baris][jum_baris];
    int x;
    pascal[1][1] = 1;
    pascal[2][1] = 1;
    pascal[2][2] = 1;
    // judul program
    for(int baris = 1 ; baris <= jum_baris ; baris++)
    {
        // untuk mencetak spasi
        for(int cetak = 0 ; cetak < spasi ; cetak++)
        {
            printf(" ");
        }
        // mencetak nilai pascal
        for(int pascal_kolom = 1 ; pascal_kolom <= baris ; pascal_kolom++ )
        {
            if(pascal_kolom == 1 || pascal_kolom == baris)
            {
                pascal[baris][pascal_kolom] = 1;
            }
            else
            {
                pascal[baris][pascal_kolom] = pascal[baris-1][pascal_kolom-1] + pascal[baris-1][pascal_kolom];
            }
            printf("%d ",pascal[baris][pascal_kolom]);
        }
        spasi--;
        printf("\n");
    }
    printf("\n");
    return(0);
}
