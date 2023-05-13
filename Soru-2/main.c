#include <stdio.h>
#include <stdlib.h>

/* Binary Search normelde s�ral� bir diziyi arar. S�ralamak i�in ilke ba�ta bubble sort algoritmas�n� 
   s�ral�ycak ondan sonra da Binary Search ile arama algoritmas� ile arama yap�caz. */
int main() {
    int dizi[]={4,8,3,84,47,76,9,24,68};
    int boyut = sizeof(dizi)/sizeof(int);
    int i, j, gecici;

    //Bubble sort ile diziyi k���kten b�y��e s�rala
    for(i = 0; i < boyut-1; i++) {
        for(j = 0; j < boyut-i-1; j++) {
            if(dizi[j] > dizi[j+1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    //S�ralanm�� diziyi ekrana yazd�r
    printf("Dizi sirali:\n");
    for(i = 0; i < boyut; i++) {
        printf("%d  ", dizi[i]);
    }

    //Kullan�c�dan aranacak say�y� iste
    int aranan, sol = 0, sag = boyut-1, orta;

    printf("\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    //Binary search ile aranan say�y� ara
    while(sol <= sag) {
        orta = (sol + sag)/2;
        if(dizi[orta] == aranan) {
            printf("%d sayisi dizinin %d. indeksinde bulundu.", aranan, orta+1);
            break;
        }
        else if(dizi[orta] < aranan) {
            sol = orta + 1;
        }
        else {
            sag = orta - 1;
        }
    }
    if(sol > sag) {
        printf("%d sayisi dizide bulunamadi.", aranan);
    }
    return 0;
}

