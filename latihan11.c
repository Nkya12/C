//Contoh prgram menggunakan if-else
#include<stdio.h>
#include<conio.h>

int main()
{
    float luas_tnh,harga_sat_tnh,harga_tnh;
    float luas_bng,harga_sat_bng,harga_bng;
    float harga_total;
    char tipe;

    printf("Luas Tanah      :");
    scanf("%f",&luas_tnh);
    printf("Luas Bangunan   :");
    scanf("%f",&luas_bng);
    printf("Tipe            :");
    tipe=getch();

    if(tipe=='A' || tipe=='a'){
        harga_sat_tnh = 40000;
        harga_sat_bng = 150000;
    }
    else{
        harga_sat_tnh = 50000;
        harga_sat_bng = 200000;
    }

    harga_tnh = luas_tnh*harga_sat_tnh;
    harga_bng = luas_bng * harga_sat_bng;
    harga_total = harga_tnh + harga_bng;

    printf("\n\nHarga Tanah     : %12.2f",harga_tnh);
    printf("\n\nHarga Bangunan  : %12.2f",harga_bng);
    printf("\n                  ====================================== +  ");
    printf("\n\nHarga Total     : %12.2f",harga_total);
    printf("\n                  ======================================");
    getch();

}