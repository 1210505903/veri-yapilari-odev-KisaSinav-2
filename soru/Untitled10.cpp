#include <iostream>
using namespace std;

int main(){
	int x,sayac=0;
	cout << "Sayi girin : ";
	cin >> x ;
	
	for(int i=1;i<=x;i++){
		if(x%i==0)
			sayac++;	
	}
	cout << "Toplam " << sayac << " farkli boleni vardir.";
	
	return 0;
}
