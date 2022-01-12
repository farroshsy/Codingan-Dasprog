#include<stdio.h>

int main()
{
    int n, i = 3, Hitung, c;

    printf("Input Bilangan N :  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nAngka Prima Pertama pada N = %d adalah : ", n);
        printf("2 ");
    }
    for(Hitung = 2; Hitung <= n; i++)
    {
        // untuk mengecek bilangan prima atau bukan
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break; // memberhentikan perintah sebelum waktunya
        }

        if(c == i)  // c adalah angka prima
        {
            printf("%d ", i);
            Hitung++;    // jumlah angka
        }

    }
    return 0;
}
