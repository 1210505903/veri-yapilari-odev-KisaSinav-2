/*Verilen bir N sayýnýn, herhangi iki sayýnýn kareleri toplamýna eþit olup olmadýðýný bulan ve bu 
sayýlarý ekrana yazdýran programý yazýnýz. */
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
