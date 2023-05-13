#include <stdio.h>
#include <stdlib.h>

int main() {
    int dizi[100];
    int a, j, n, x; 
    printf("Dizi kac elemandan olusmali : "); 
    scanf("%d",&n); 
    for(x=0 ; x<n; x++){
        printf("Dizinin [%d]. Elemanýný Girin : ",x+1);
        scanf("%d",&dizi[x]);
    }
    printf("Aranacak Elemaný girin : ");
    scanf("%d",&j);
    //dizi n j
    
	for(int i = 0; i < n; i++){
        if (dizi[i] == j) {
            printf("%d dizide %d. indekste bulundu.\n", j, i+1);
            return 0;
        }
    }
    printf("%d dizide bulunamadi.\n", j);
    return 0;
}

    
