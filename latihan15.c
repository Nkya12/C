//contoh program tolower
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char kaya;

    printf("Apakah saya termaksud Orang Kaya (Y/T) = ");
    scanf("%c",&kaya);

    if(tolower(kaya) == 'y'){
        printf("\nSaya akan sering pergi ke Hawai");
        printf("\nDan makan-makanan yang mahan");
        printf("\nSerta bersenang-senag di Las Vegas");
    }
    else{
        printf("\nHiburan saya hanya Acara TV");
        printf("\nDan makanan saya hanya itu-itu saja");
    }
    getch();
}