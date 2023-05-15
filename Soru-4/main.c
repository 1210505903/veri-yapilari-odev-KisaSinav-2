#include <stdio.h>
#include <stdlib.h>

// Yapý (struct) tanýmlama 
struct Node {
    int data; // Veri 
    struct Node* next; // Sonraki düðümü gösteren iþaretçi  
};

// Baþlangýçta kuyruk boþ olduðu için baþ ve son NULL 
struct Node* front = NULL;  
struct Node* rear = NULL;  

// Eleman ekleme fonksiyonu - enqueue 
void enqueue(int x) { 
    // yeni düðüm oluþtur
    struct Node* temp =  
        (struct Node*)malloc(sizeof(struct Node)); 
    // yeni düðümün verisini x olarak ata     
    temp->data = x;
    // yeni düðümün sonraki düðümü NULL     
    temp->next = NULL;
    // Kuyruk boþsa hem baþ hem son yeni düðüm olur
    if(front == NULL && rear == NULL) {    
        front = rear = temp;
        return;
    }
    // Kuyruk boþ deðilse, mevcut son düðümün sonraki düðümü yeni düðüm olur
    rear->next = temp;
    // Son düðüm güncellenir 
    rear = temp; 
}  

// Eleman çýkarma fonksiyonu - dequeue
void dequeue() {
    // geçici düðüm baþ düðüm olur
    struct Node* temp = front;  
    // Kuyruk boþsa hata verir 
    if(front == NULL) {
        printf("Kuyruk bos!\n");
        return;
    }
    // Kuyrukta tek eleman varsa hem baþ hem son NULL olur
    if(front == rear) {
        front = rear = NULL;
    }
    else{   // Kuyrukta birden fazla eleman varsa, baþ sonraki düðüme geçer 
	        front = front->next; 
    }
    // geçici düðüm silinir
	free(temp);  
}

// Kuyruktaki elemanlarý gösterme fonksiyonu - display 
void display() {
    struct Node* temp = front;  // geçici düðüm baþ düðüm olur
    if(front == NULL) {   // Kuyruk boþsa hata verir
        printf("Kuyruk bos!\n");
        return;
    }
    while(temp != NULL) {   // geçici düðüm NULL olana kadar döner
        printf("%d ",temp->data);   // düðümün verisini yazdýrýr
        temp = temp->next;  // geçici düðüm bir sonraki düðüme geçer 
    }
    printf("\n");  // Satýr baþý 
}

int main() {
    // Deðiþken tanýmlama
    int choice, x; 
    
    while(1) {   // Sonsuz döngü
        // Menü 
        printf("1. Kuyrukta Eleman Ekle\n");
        printf("2. Kuyruktan Eleman Cikar\n");
        printf("3. Kuyruktaki Elemanlari Goster\n");
        printf("4. Cikis\n");
        printf("Secim yapiniz: ");
        scanf("%d",&choice);  // Kullanýcýdan seçim al
        
        switch(choice) {  // Seçime göre yapýlacak iþlem
            case 1:   // Eleman ekleme seçimi 
                printf("Eklenecek elemani girin: ");
                scanf("%d",&x);   // Kullanýcýdan eleman deðeri alýnýr
                enqueue(x);   // eleman eklenir
                break;   // Switch'ten çýkýlýr
            
            case 2:   // Eleman çýkarma seçimi 
                dequeue();  // Eleman çýkarýlýr
                break;   // Switch'ten çýkýlýr
                
            case 3:   // Elemanlarý gösterme seçimi
                display();   // Elemanlar gösterilir
                break;   // Switch'ten çýkýlýr
                
            case 4:   // Çýkýþ seçimi
                exit(0);  // Programdan çýkýlýr
                
            default:   // Geçersiz seçim
                printf("Gecersiz secim!\n"); 
        }
    }
    return 0;
}
