#include <stdio.h>

int main(){
	int a,sonuc=1;
	printf("n! Degerini girin : ");
	scanf("%d",&a);
	
	if(a==0){
		sonuc==1;		
	}
	else if(a==1){
		sonuc==1;
	}
	else{
		for(int i=1;i<=a;i++)
			sonuc*=i;
	}
	printf("n! Faktoriyelin sonucu = %d",sonuc);
}
