#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#define motor_max 200
#define mobil_max 100

typedef struct{
    int mobil;
    int motor;
}total;

typedef struct{
    int mobil;
    int motor;
}cost;

typedef struct{
    int parkir_mobil;
    int parkir_motor;
}slot;

typedef struct{
    int mobil;
    int motor;
}income;


int main()
{
    while(1)
    {
    int x;
    int jenis;
    int i;
    int hasil;
    int jam;
    total total;
    cost cost[101];
    slot slot;
    income income;
    int static jumlahmotor=0;
    int static jumlahmobil=0;
    
        
    printf("\n----------Hospital Parking----------\n \t");
    printf("1. Pintu Masuk\n \t");
    printf("2. Informasi slot parkir\n \t");
    printf("3. Pintu Keluar\n \t");
    printf("4. Informasi total jumlah uang perhari\n \t");
    printf("5. EXIT\n \t");
    printf("Masukkan opsi : ");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1:
            printf("|||||||||||||||||||||||||||||||||||||||\n");
            printf("Pilih jenis kendaraan\n");
            printf("1. Mobil\n");
            printf("2. Motor\n");
            printf("Jenis Kendaraan:");
            scanf(" %d",&jenis);
            
            if(jenis==1)
            {
                if(total.mobil>= 0 && total.mobil <101)
                {
                printf("|||||||||||||||||||||||||||||||||||||||\n");
                printf("Tarif Mobil 5000/jam \n");
                total.mobil++;
                for(i=1;i<=total.mobil;i++){
                    cost[i].mobil=5000;
                }
                printf("\nAmbil struk anda");
                getch();
                system("cls");
                }
                else
                {
                    printf("Parkiran Penuh");
                }
                
            }
            else
            {
                if(total.motor>= 0 && total.motor <201)
                {
                printf("|||||||||||||||||||||||||||||||||||||||\n");
                printf("Tarif Motor 2000/jam \n");
                total.motor++;
                for(i=1;i<=total.motor;i++){
                    cost[i].motor=2000;
                }
                printf("\nAmbil struk anda");
                getch();
                system("cls");
                }
                else
                {
                    printf("Parkiran Penuh");
                }
            }
            break;
        
        case 2:
            printf("|||||||||||||||||||||||||||||||||||||||\n");
            printf("Slot parkir yang tersedia\n");
            slot.parkir_mobil = mobil_max-total.mobil;
            slot.parkir_motor = motor_max-total.motor;
            printf("\nMobil = %d dan Motor = %d",slot.parkir_mobil,slot.parkir_motor);
            getch();
            break;
            
        case 3:
            printf("|||||||||||||||||||||||||||||||||||||||\n");
            printf("Pilih jenis kendaraan\n");
            printf("1. Mobil\n");
            printf("2. Motor\n");
            printf("Jenis Kendaraan:");
            scanf(" %d",&jenis);
            if(jenis == 1)
            {
                if(total.mobil>0 && total.mobil <101)
                {
                printf("|||||||||||||||||||||||||||||||||||||||\n");
                printf("Masukkan Waktu Parkir(dalam jam) : ");
                scanf("%d",&jam);
                for(i=1;i<=total.mobil;i++){
                    income.mobil = jam*cost[i].mobil;
                    printf("Biaya = %d ",income.mobil);
                    }
                jumlahmobil += income.mobil;
                total.mobil--;
                getch();
                system("cls");
                }
                else
                {
                printf("Parkiran masih kosong");
                getch();
                system("cls");
                }
                break;
            }
            else
            {
                if(total.motor>0 && total.motor <201)
                {
                printf("|||||||||||||||||||||||||||||||||||||||\n");
                printf("Masukkan Waktu Parkir(dalam jam) : ");
                scanf("%d",&jam);
                for(i=1;i<=total.motor;i++){
                    income.motor = jam*cost[i].motor;
                    printf("Biaya = %d ",income.motor);
                    }
                jumlahmotor += income.motor;
                total.motor--;
                getch();
                system("cls");
                }
                else
                {
                printf("Parkiran masih kosong");
                getch();
                system("cls");
                }
                break;
            }
            
        case 4:
            printf("|||||||||||||||||||||||||||||||||||||||\n");
            printf("Jumlah uang saat ini : \n");
            hasil = jumlahmobil + jumlahmotor;
            if(hasil == 0)
            {
                printf("Jumlah uang saat ini belum ada");
            }
            else
            {
                printf("%d",hasil);
                getch();
                system("cls");
            }
            break;
        
        case 5:
            exit(0);
        }
    }
    return 0;
}

