#include <iostream>
#include <string>
#define MAX 10
using namespace std;

struct queue{
	int front;
	int rear;
	string name[MAX];
	string order[MAX];
	int price[MAX];
	int totalOrder[MAX];
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
			cout << i + 1 << ". " << Queue.name[i] << " - " << Queue.order[i] << " - " << Queue.totalOrder[i] << endl;
		}
		cout << endl;
	}
}

void showMenu(){
	cout<<"---------------------\n"
        <<"    Menu Pilihan\n"
        <<"---------------------\n"
        <<"1. Coffee.......80000\n"
        <<"2. Iced Tea.....20000\n"
        <<"3. Kopi..........4000\n"
        <<"4. Es Teh........5000\n"
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
		string item;
		string name;
		int order, jumlahPesanan, price;
		
		cout << "Masukkan nama: "; 
		cin >> name;
//        getline(cin, name);
        
        do {
			showMenu();
			cout << "Masukkan pesanan: ";
	        cin >> order; 
			
			switch(order){
			    case 1:
			        item = "Coffee";
			        price = 80000;
			        break;
			    case 2:
			        item = "Ice Tea";
			        price = 20000;
			        break;
			    case 3:
			        item = "Kopi";
			        price = 4000;
			        break;
			    case 4:
			        item = "Es Teh";
			        price = 5000;
			        break;
			    default:
			        cout << "Pilihan tidak tersedia" << endl;
			}
		} while(order > 4);
		
		cout << "Masukkan jumlah pesanan: ";
        cin >> jumlahPesanan;
        		
		Queue.name[Queue.rear] = name;
		Queue.order[Queue.rear] = item;
		Queue.price[Queue.rear] = price;
		Queue.totalOrder[Queue.rear] = jumlahPesanan;
		Queue.rear++;
		
		cout << "Pesanan masuk ke dalam antrean\n" << endl;
		printQueue();
	}
}

void pay(){
	if(isEmpty()){
		cout << "Antrean pesanan kosong" << endl;
	} else {
		for(int i = Queue.front; i < Queue.front + 1; i++){
			int bayar, total, kembali;

			total = Queue.price[i] * Queue.totalOrder[i];
			
			cout << "Atas nama\t\t: " << Queue.name[i] << endl;
			cout << "Item\t\t\t: " << Queue.order[i] << endl;
			cout << "Harga\t\t\t: " << Queue.price[i] << endl;
			cout << "Jumlah\t\t\t: " << Queue.totalOrder[i] << endl;
			cout << "Total Harga\t\t: " << total << endl;
			cout << endl;

			while(true){
				cout << "Masukan Jumlah Bayar\t: ";
				cin >> bayar;
				
				if(bayar >= total){
					break;
				}
				cout << "Maaf Transaksi Tidak Bisa Dilakukan.\n" << "Uang Anda kurang" << endl;
			}
			kembali = bayar - total;
			cout << "Kembalian\t\t: " << kembali << endl;
			cout << endl;
		}
		
		for(int i = Queue.front; i < Queue.rear; i++){
			Queue.name[i] = Queue.name[i + 1];
			Queue.order[i] = Queue.order[i + 1];
			Queue.price[i] = Queue.price[i + 1];
			Queue.totalOrder[i] = Queue.totalOrder[i + 1];
		}
		Queue.rear--;
		printQueue();
	}
}

void clear(){
	Queue.front = Queue.rear = 0;
	cout << "Antrean dibubarkan.\n" << "Cafe dirazia Satpol PP.\n" << endl;
}

int main(){
	int pilihan;
	do{
		cout<<"---------------------\n"
            <<"      Nopalesto\n"
            <<"---------------------\n"
            <<"1. Buat Pesanan \n"
            <<"2. Bayar Pesanan \n"
            <<"3. Bubarkan Antrean \n"
            <<"4. Keluar \n"
            <<"---------------------\n"
            <<"Masukkan Pilihan (1-4) : "; cin >> pilihan;
        cout<<endl;
        
        switch(pilihan){
        	case 1:
        		newOrder();
        		break;
        	case 2:
        		pay();
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