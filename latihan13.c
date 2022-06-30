// Contoh program Switch-break
#include<stdio.h>
#include<conio.h>

int main(){
    int bil;

    printf("Ketikan Suatu Bilangan Bulat Antara (1 s/d 5) = ");
    scanf("%d",&bil);

    switch (bil)
    {
    case 1:
        printf("Anda mengetikan angka Satu");
        break;
    case 2:
        printf("Anda mengetikan angka Dua");
        break;
    case 3:
        printf("Anda mengetikan angka Tiga");
        break;
    case 4:
        printf("Anda mengetikan angka Empat");
        break;
    case 5:
        printf("Anda mengetikan angka Lima");
        break;
    default:
        printf("Anda Mengetikan angka yang Salah");
        break;
    }
    getch();
}