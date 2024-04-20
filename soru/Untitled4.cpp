#include <stdio.h>
#include <string.h>

int main(){
	int sayi[10];
	for(int i=1;i<=10;i++){
		printf("%d. Degeri gir : ",i);
		scanf("%d",sayi[i]);
	}
	printf("%s",strrev(sayi));
	
	return 0;
}
