#include <stdio.h>
//Bismillah Isok
int wadah[100][100], uji[100][100], cek=0;
long long lokasi1, lokasi2, posisi1, posisi2;
void inputlokasi();
long long inputposisi();
void kerjakan(int a, int b, int c);
void print();

//INPUT UTAMA
int main() {
    int hasil;
    inputlokasi();              //input lokasi
    kerjakan(posisi1, posisi2, inputposisi());  // nyari banyak angka wadah[B][K]
    print();
    return 0;
}
//fungsi input
void inputlokasi(){
    scanf("%ld %ld",&lokasi1, &lokasi2);
    for(int i=0; i<lokasi1; i++){
            for(int j = 0; j<lokasi2; j++){
                scanf("%d",&wadah[i][j]);
                uji[i][j] = 0;
            }
        }
}
//fungsi input posisi
long long inputposisi(){
    int tampung;
    scanf("%ld %ld", &posisi1, &posisi2);
    tampung=wadah[posisi1][posisi2];
    return tampung;
}

/*fungsi pemulai percekan*/
void kerjakan(int a, int b, int c){
    bool kondisi1, kondisi2;
    kondisi1= a>=0 && a<lokasi1;
    kondisi2 = b>=0 && b<lokasi2;
    if(kondisi1 && kondisi2){
        if(!uji[a][b] || uji[a][b]==0){
            uji[a][b] =1;
            if(wadah[a][b]==c){
                cek++;
                kerjakan(a-1, b, c);
                kerjakan(a+1, b, c);
                kerjakan(a, b-1, c);
                kerjakan(a, b+1, c);
            }
        }
    }
}
//Fungsi print
void print(){
    int hasil;
    hasil=cek*(cek-1);
    printf("%d", hasil);
}
