#include <stdio.h>
int main(){
	int n=3,m=2;
	for(int i=n;i<=0;i--)
		printf(" ");
	for(int i=1;i>=n;i=i+2)
		printf("*");
	for(int i=n;i<=0;i--)
		printf(" ");
}
