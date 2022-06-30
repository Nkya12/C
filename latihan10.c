//Contoh program menggunakan IF
#include <stdio.h>
#include <conio.h>

int main(){
    int usia;
    printf("\nBerapakah usia anda  ?");
    scanf("%d",&usia);

    if(usia >= 40){
        printf("Wah Anda Sudah Cukp Tua");
        printf("Jangan Makan Makanan yang Banyak Mengandung Kolestrol");
        printf("Tidak Baik Untuk Kesehantan Anda");
    }

getch();

}