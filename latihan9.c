#include <stdio.h>
#include <conio.h>

int main(){
    float jml_belanja, discount=0, jml_bayar;
    printf("\nBesarnya belanja :");
    scanf("%f",&jml_belanja);

    if(jml_belanja >= 100000)
        discount = 0.10*jml_belanja;
        jml_belanja=jml_belanja-discount;

    printf("\nDiscount        : %10.2f",discount);
    printf("\nUang pembayaran : %10.2f",jml_belanja);
    getch();
}