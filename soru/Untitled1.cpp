#include <stdio.h>

int main() {
	int a =0;
    printf("Sayi Girin: ");
    scanf("%d",&a);
    
  	for(int i=2;i<=a;i++){
    	if(a%i==0){
        	printf("ASAL SAYI DEGILDIR");
            break;
        }
        else{
        	printf("ASAL SAYI DIR");
        	break;
        }
    }
  return 0;
}
