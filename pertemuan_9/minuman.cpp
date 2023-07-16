#include <iostream>
#define MAX 10
using namespace std;

struct queue{
	int front, rear;
	string order[MAX], name[MAX];
} Queue;

void init(){
	Queue.front = Queue.rear = 0;
}

bool isFull(){
	return Queue.rear == MAX;
}

bool isEmpty(){
	return Queue.rear == 0;
}

void printQueue(){
	if(isEmpty()){
		cout << "Antrean kosong" << endl;
	} else {
		cout << "Antrean: " << endl;
		for(int i = Queue.front; i < Queue.rear; i++){
			cout << i + 1 << ". " << Queue.name[i] << " - " << Queue.order[i] << endl;
		}
	}
}

void showMenu(){
	cout<<"---------------------\n"
        <<"    Menu Pilihan\n"
        <<"---------------------\n"
        <<"1. Coffee \n"
        <<"2. Iced Tea \n"
        <<"3. Kopi \n"
        <<"4. Es Teh \n"
        <<"---------------------\n";
    cout<<endl;
}

void newOrder(){
	if(isEmpty()){
		init();
	} 
	
	if(isFull()){
		cout << "Antrean penuh" << endl;
	}else {
		string order, name;
		
		cout << "Masukkan nama: ";
        cin >> name;
		showMenu();
		cout << "Masukkan pesanan: ";
        cin >> order; 
		
		if(order == "1"){
			order = "Coffee";
		} else if(order == "2"){
			order = "Iced Tea";
		} else if(order == "3"){
			order = "Kopi";
		} else if(order == "4"){
			order = "Es teh";
		} else {
			cout << "Pilihan tidak ditemukan";
		}
        		
		Queue.order[Queue.rear] = order;
		Queue.name[Queue.rear] = name;
		Queue.rear++;
		cout << "Pesanan masuk ke dalam antrean" << endl;
		printQueue();
	}
}

void dequeue(){
	if(isEmpty()){
		cout << "Antrean pesanan kosong" << endl;
	} else {
		cout << "Mengeluarkan antrean \n" << Queue.order[Queue.front] << endl;
		for(int i = Queue.front; i < Queue.rear; i++){
			Queue.name[i] = Queue.name[i + 1];
			Queue.order[i] = Queue.order[i + 1];
		}
		Queue.rear--;
		printQueue();
	}
}

void clear(){
	Queue.front = Queue.rear = 0;
	cout << "Antrean pesanan sudah kosong" << endl;
}

int main(){
	int pilihan;
	do{
		cout<<"---------------------\n"
            <<"     Nopal Cafe\n"
            <<"---------------------\n"
            <<"1. Buat Pesanan \n"
            <<"2. Hapus Pesanan \n"
            <<"3. Bersihkan Pesanan \n"
            <<"4. Keluar \n"
            <<"---------------------\n"
            <<"Masukkan Pilihan (1-4) : "; cin >> pilihan;
        cout<<endl;
        
        switch(pilihan){
        	case 1:
        		newOrder();
        		break;
        	case 2:
        		dequeue();
        		break;
        	case 3:
        		clear();
        		break;
        	case 4:
        		cout << "Exit program";
        		break;
        	default:
        		cout << "Pilihan tidak tersedia" << endl;
		}
	} while(pilihan != 4);
	return 0;
}