#include <stdio.h>
#include <stdlib.h>

// Yap� (struct) tan�mlama 
struct Node {
    int data; // Veri 
    struct Node* next; // Sonraki d���m� g�steren i�aret�i  
};

// Ba�lang��ta kuyruk bo� oldu�u i�in ba� ve son NULL 
struct Node* front = NULL;  
struct Node* rear = NULL;  

// Eleman ekleme fonksiyonu - enqueue 
void enqueue(int x) { 
    // yeni d���m olu�tur
    struct Node* temp =  
        (struct Node*)malloc(sizeof(struct Node)); 
    // yeni d���m�n verisini x olarak ata     
    temp->data = x;
    // yeni d���m�n sonraki d���m� NULL     
    temp->next = NULL;
    // Kuyruk bo�sa hem ba� hem son yeni d���m olur
    if(front == NULL && rear == NULL) {    
        front = rear = temp;
        return;
    }
    // Kuyruk bo� de�ilse, mevcut son d���m�n sonraki d���m� yeni d���m olur
    rear->next = temp;
    // Son d���m g�ncellenir 
    rear = temp; 
}  

// Eleman ��karma fonksiyonu - dequeue
void dequeue() {
    // ge�ici d���m ba� d���m olur
    struct Node* temp = front;  
    // Kuyruk bo�sa hata verir 
    if(front == NULL) {
        printf("Kuyruk bos!\n");
        return;
    }
    // Kuyrukta tek eleman varsa hem ba� hem son NULL olur
    if(front == rear) {
        front = rear = NULL;
    }
    else{   // Kuyrukta birden fazla eleman varsa, ba� sonraki d���me ge�er 
	        front = front->next; 
    }
    // ge�ici d���m silinir
	free(temp);  
}

// Kuyruktaki elemanlar� g�sterme fonksiyonu - display 
void display() {
    struct Node* temp = front;  // ge�ici d���m ba� d���m olur
    if(front == NULL) {   // Kuyruk bo�sa hata verir
        printf("Kuyruk bos!\n");
        return;
    }
    while(temp != NULL) {   // ge�ici d���m NULL olana kadar d�ner
        printf("%d ",temp->data);   // d���m�n verisini yazd�r�r
        temp = temp->next;  // ge�ici d���m bir sonraki d���me ge�er 
    }
    printf("\n");  // Sat�r ba�� 
}

int main() {
    // De�i�ken tan�mlama
    int choice, x; 
    
    while(1) {   // Sonsuz d�ng�
        // Men� 
        printf("1. Kuyrukta Eleman Ekle\n");
        printf("2. Kuyruktan Eleman Cikar\n");
        printf("3. Kuyruktaki Elemanlari Goster\n");
        printf("4. Cikis\n");
        printf("Secim yapiniz: ");
        scanf("%d",&choice);  // Kullan�c�dan se�im al
        
        switch(choice) {  // Se�ime g�re yap�lacak i�lem
            case 1:   // Eleman ekleme se�imi 
                printf("Eklenecek elemani girin: ");
                scanf("%d",&x);   // Kullan�c�dan eleman de�eri al�n�r
                enqueue(x);   // eleman eklenir
                break;   // Switch'ten ��k�l�r
            
            case 2:   // Eleman ��karma se�imi 
                dequeue();  // Eleman ��kar�l�r
                break;   // Switch'ten ��k�l�r
                
            case 3:   // Elemanlar� g�sterme se�imi
                display();   // Elemanlar g�sterilir
                break;   // Switch'ten ��k�l�r
                
            case 4:   // ��k�� se�imi
                exit(0);  // Programdan ��k�l�r
                
            default:   // Ge�ersiz se�im
                printf("Gecersiz secim!\n"); 
        }
    }
    return 0;
}
