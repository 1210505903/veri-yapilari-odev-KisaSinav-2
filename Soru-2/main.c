#include <stdio.h>
#include <stdlib.h>

/* Binary Search normelde sýralý bir diziyi arar. Sýralamak için ilke baþta bubble sort algoritmasýný 
   sýralýycak ondan sonra da Binary Search ile arama algoritmasý ile arama yapýcaz. */
int main() {
    int dizi[]={4,8,3,84,47,76,9,24,68};
    int boyut = sizeof(dizi)/sizeof(int);
    int i, j, gecici;

    //Bubble sort ile diziyi küçükten büyüðe sýrala
    for(i = 0; i < boyut-1; i++) {
        for(j = 0; j < boyut-i-1; j++) {
            if(dizi[j] > dizi[j+1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    //Sýralanmýþ diziyi ekrana yazdýr
    printf("Dizi sirali:\n");
    for(i = 0; i < boyut; i++) {
        printf("%d  ", dizi[i]);
    }

    //Kullanýcýdan aranacak sayýyý iste
    int aranan, sol = 0, sag = boyut-1, orta;

    printf("\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    //Binary search ile aranan sayýyý ara
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

