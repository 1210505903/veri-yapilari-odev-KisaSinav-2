/*Verilen bir N say�n�n, herhangi iki say�n�n kareleri toplam�na e�it olup olmad���n� bulan ve bu 
say�lar� ekrana yazd�ran program� yaz�n�z. */
#include <stdio.h>

int main() {
	int a,snc=0;
    printf("Sayfa sayisini Girin: ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
    	for(int j=1;j<=a;j++){
    		snc=(i*i)+(j*j);
    		if(snc==a){
    			printf("Iki deger kare toplamini vermektir: %d %d\n",i,j);
				//return 0;
			}
		}
	}
	printf("TUTMADI agaa ");		
  	return 0;
}
