#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[40];
    int nrp;
    char kota[40];
    int jarak;
}mahasiswa;

int main()
{
    int i;
    mahasiswa studentaddress_t[21];
    
    for(i=1;i<=2;i++){
    printf("NRP Mahasiswa ke-%d = ",i);
    scanf("%d",&studentaddress_t[i].nrp);
    printf("Nama Mahasiswa ke-%d = ",i);
    scanf("%s",&studentaddress_t[i].nama);
    printf("Kota Mahasiswa ke-%d = ",i);
    scanf("%s",&studentaddress_t[i].kota);
    printf("Jarak Mahasiswa ke-%d = ",i);
    scanf("%d",&studentaddress_t[i].jarak);
    printf("\n");
    }
    
    for(i=1;i<=2;i++){
    printf("Mahasiswa ke-%d = %d %s %s %d \n",i,studentaddress_t[i].nrp,studentaddress_t[i].nama,studentaddress_t[i].kota,studentaddress_t[i].jarak);
    }
    
    if(strcmp(studentaddress_t[1].kota,studentaddress_t[2].kota) == 0)
    {
        printf("%s dan %s sama-sama tinggal di %s",studentaddress_t[1].nama,studentaddress_t[2].nama,studentaddress_t[1].kota);
    }
    
    return 0;
}
