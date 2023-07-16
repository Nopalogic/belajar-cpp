#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

struct Node {
	Node *next;
	int tableNumber;
	string nama;
	string order[100][3];
	int orderLength;
} *head, *tail;

void init(){
	head = NULL;
	tail = NULL;
}

int isEmpty(){
	if(head == NULL){
		return 1;
	} else {
		return 0;
	}
}

string listMenu[3][5][2] = 
	{
		{
			{"Nasi Goreng", "35000"},  
			{"Rice Bowl Sei Sapi", "39000"}, 
			{"Mie Goreng Spesial", "35000"}, 
			{"Spaghetti Brulee", "35000"}, 
			{"Chicken Katsu", "38000"},
		},
		{
			{"Long Black", "22000"}, 
			{"Coffith Aren", "25000"}, 
			{"Lemon Tea", "22000"}, 
			{"Matcha Latte", "26000"}, 
			{"Red Velvet", "26000"}
		},
		{
			{"Kebab Mozzarella", "26000"},
			{"Potato Cheese", "25000"},
			{"Dimsum", "20000"},
			{"Risoles Smoke Beef", "10000"},
			{"Pisang Nugget", "20000"},
		}
	};

void line(){
	cout << "--------------------------------" << endl;
}

void header(){
	cout<< "--------------------------------\n"
		<< "    COFFITH COFFEE & KITCHEN    \n"
		<< "--------------------------------\n";
}

void newOrder(){
	string more;
	int pilih;
	Node *customer;
	customer = new Node;
	
	header();
	cout << "Input Nomor meja: ";
	cin >> customer->tableNumber;
	
	cout << "Input Nama\t: ";
	cin.ignore();
	getline(cin, customer->nama);
	
	int indexRow = 0, pilihMenu;
	bool loop = true;
	while(loop == true) {
		do {
			system("cls");	
			cout<< "--------------------------------\n"
				<< "              MENU\n"
				<< "--------------------------------\n"
				<< "\t1. Makanan\n"
				<< "\t2. Minuman\n"
				<< "\t3. Appetizer\n"
				<< "--------------------------------\n"
				<< "Pilih menu: ";
			cin >> pilihMenu;
			
			switch(pilihMenu){
				case 1:
					cout << "--------------------------------\n";
					for(int x = 0; x < 5; x++){
						cout << x + 1 << ". " << left << setw(20) << listMenu[0][x][0] << " " << listMenu[0][x][1] << endl;
					}
					cout << "--------------------------------\n";
					break;
				case 2:
					cout << "--------------------------------\n";
					for(int x = 0; x < 5; x++){
						cout << x + 1 << ". " << left << setw(20) << listMenu[1][x][0] << " " << listMenu[1][x][1] << endl;
					}
					cout << "--------------------------------\n";
					break;
				case 3:
					cout << "--------------------------------\n";
					for(int x = 0; x < 5; x++){
						cout << x + 1 << ". " << left << setw(20) << listMenu[2][x][0] << " " << listMenu[2][x][1] << endl;
					}
					cout << "--------------------------------\n";
					break;
				default:
					cout << "Pilihan tidak ditemukan.";
			}
		} while(pilihMenu > 3);

		cout << "Input Pesanan\t\t: ";
		cin >> pilih;
		
		if(pilihMenu == 2){
			pilih += 5;
		} else if(pilihMenu == 3){
			pilih += 10;
		}
		
		switch(pilih){
			case 1:
				customer->order[indexRow][0] = listMenu[0][0][0];
				customer->order[indexRow][1] = listMenu[0][0][1];
				break;
			case 2:
				customer->order[indexRow][0] = listMenu[0][1][0];
				customer->order[indexRow][1] = listMenu[0][1][1];
				break;
			case 3:
				customer->order[indexRow][0] = listMenu[0][2][0];
				customer->order[indexRow][1] = listMenu[0][2][1];
				break;
			case 4:
				customer->order[indexRow][0] = listMenu[0][3][0];
				customer->order[indexRow][1] = listMenu[0][3][1];
				break;
			case 5:
				customer->order[indexRow][0] = listMenu[0][4][0];
				customer->order[indexRow][1] = listMenu[0][4][1];
				break;
			case 6:
				customer->order[indexRow][0] = listMenu[1][0][0];
				customer->order[indexRow][1] = listMenu[1][0][1];
				break;
			case 7:
				customer->order[indexRow][0] = listMenu[1][1][0];
				customer->order[indexRow][1] = listMenu[1][1][1];
				break;
			case 8:
				customer->order[indexRow][0] = listMenu[1][2][0];
				customer->order[indexRow][1] = listMenu[1][2][1];
				break;
			case 9:
				customer->order[indexRow][0] = listMenu[1][3][0];
				customer->order[indexRow][1] = listMenu[1][3][1];
				break;
			case 10:
				customer->order[indexRow][0] = listMenu[1][4][0];
				customer->order[indexRow][1] = listMenu[1][4][1];
				break;
			case 11:
				customer->order[indexRow][0] = listMenu[2][0][0];
				customer->order[indexRow][1] = listMenu[2][0][1];
				break;
			case 12:
				customer->order[indexRow][0] = listMenu[2][1][0];
				customer->order[indexRow][1] = listMenu[2][1][1];
				break;
			case 13:
				customer->order[indexRow][0] = listMenu[2][2][0];
				customer->order[indexRow][1] = listMenu[2][2][1];
				break;
			case 14:
				customer->order[indexRow][0] = listMenu[2][3][0];
				customer->order[indexRow][1] = listMenu[2][3][1];
				break;
			case 15:
				customer->order[indexRow][0] = listMenu[2][4][0];
				customer->order[indexRow][1] = listMenu[2][4][1];
				break;
			default:
				cout << "Pilihan tidak tersedia.";
		}	
		
		cout << "Input Jumlah Pesanan\t: ";
		cin >> customer->order[indexRow][2];
		
		indexRow++;
		
		cout << "Ada lagi? [Y/N]: ";
		cin >> more;
		
		if(more == "n" || more == "N"){
			loop = false;
		}
	}
	
	customer->orderLength = indexRow;
	customer->next = NULL;
	
	if(head == NULL){
		head = customer;
	} else {
		tail->next = customer;
	}
	
	tail = customer;
	tail->next = NULL;
	cout << "Data masuk\n";
}

void showOrderQueue(){	
	Node *customer;
	customer = head;
	
	header();
	if(isEmpty() == 0){
		while(customer != NULL){
			cout << "Nomor Meja\t: " << customer->tableNumber << endl;
			cout << "Nama Pelanggan\t: " << customer->nama << endl;
			
			for(int i = 0; i < customer->orderLength; i++){
				cout << "\t" << left << setw(20) << customer->order[i][0] <<  " x" << customer->order[i][2] << endl;
			}
			
			line();
			customer = customer->next;
		}
	} else {
		cout << "Kosong";
	}
}

void invoice(int tableNum, int total, int bayar, int kembalian){
	Node *customer;
	customer = head;
	
	time_t now = time(0);
	tm *timestamps = localtime(&now);
	
	int totalHarga[100], harga, jumlah;
	
	for(int i = 0; i < customer->orderLength; i++){
		harga = stoi(customer->order[i][1]);
		jumlah = stoi(customer->order[i][2]);
		
		totalHarga[i] = harga * jumlah;
	}
	
	system("cls");
	header();
	cout<< timestamps->tm_mday << " " << timestamps->tm_mon + 1 << " " << timestamps->tm_year + 1900 
		<< setw(16) << timestamps->tm_hour << ":" << timestamps->tm_min << endl;
	cout << "Table No  : " << customer->tableNumber << endl;
	cout << "Bill Name : " << customer->nama << endl;
	line();
	
	for (int i = 0; i < customer->orderLength; i++) {
		cout << "    " << customer->order[i][0] << endl;
		cout << "    " << customer->order[i][2] << "x  " << right << setw(8) << customer->order[i][1] << setw(16) << totalHarga[i] << endl;
	}
	
	line();
	
	cout << "Total" << setw(27) << total << endl;
	cout << "Bayar" << setw(27) << bayar << endl;
	cout << "Kembalian" << setw(23) << kembalian << endl;
	
	line();
}
	
void hapusData(Node *customer){
	if (customer == head) {
        head = head->next;
        free(customer);
    } else {
        Node* prevNode = head;
        while (prevNode->next != customer) {
            prevNode = prevNode->next;
        }
        prevNode->next = customer->next;
        free(customer);
    }
}

void payment(int tableNum) {
	Node* customer = head;
	bool found = false;
	int totalBiaya = 0, harga, jumlah, metode, bayar, kembalian;
	int totalHarga[100];

	while (customer != NULL) {
		if (customer->tableNumber == tableNum) {
			
			for(int i = 0; i < customer->orderLength; i++){
				harga = stoi(customer->order[i][1]);
				jumlah = stoi(customer->order[i][2]);
				
				totalHarga[i] = harga * jumlah;
				totalBiaya += totalHarga[i];
			}
			
			found = true;
			
			cout << "\nTable Number  : " << customer->tableNumber << endl;
			cout << "Customer Name : " << customer->nama << endl;
			cout << "Order Details :" << endl;
			
			for (int i = 0; i < customer->orderLength; i++) {
				cout << "    " << customer->order[i][0] << endl;
				cout << "    " << customer->order[i][2] << "x  " << right << setw(8) << customer->order[i][1] << setw(16) << totalHarga[i] << endl;
			}
			line();
			cout << "Total: " << totalBiaya << endl;
			
			bool loop = true;
			while(loop){
				cout<< "\nPEMBAYARAN\n"
					<< "1. Tunai\n"
					<< "2. M-Banking\n"
					<< "3. Debit\n\n"
					<< "Pilih menu pembayaran: ";
				
				cin >> metode;
						
				switch(metode){
					case 1:
						cout << "masukkan jumlah bayar: ";
						cin >> bayar;
						break;
					case 2:
						bayar = totalBiaya;
						break;
					case 3:
						bayar = totalBiaya;
						break;
					default:
						cout << "Metode pembayaran tidak tersedia\n";
				}
						
				if(bayar >= totalBiaya){
					loop = false;
				} else {
					cout << "uang anda kurang.";
				}
						
				kembalian = bayar - totalBiaya;
			}
			
			invoice(tableNum, totalBiaya, bayar, kembalian);
			
			hapusData(customer);
			break;
		}
		customer = customer->next;
	}

	if (!found) {
		cout << "Nomor meja tidak ditemukan." << endl;
	}
	
}

int main(){
	int pilihan, tableNumber;
	
	do {
		system("cls");
		cout << endl;
		cout<< "+------------------------------+\n"
			<< "|   COFFITH COFFEE & KITCHEN   |\n"
			<< "+------------------------------+\n"
			<< "|   1. Create Order            |\n"
			<< "|   2. Bayar Pesanan           |\n"
			<< "|   3. Tampil Antrean          |\n"
			<< "|   4. Exit                    |\n"
			<< "+------------------------------+\n";
		cout << "Masukan piihan: ";
		cin >> pilihan;
		
		switch(pilihan){
			case 1:
				system("cls");
				newOrder();
				break;
			case 2:
				system("cls");
				header();
				cout << "Masukkan nomor meja: ";
				cin >> tableNumber;
				payment(tableNumber);
				break;
			case 3:
				system("cls");
				showOrderQueue();
				break;
			case 4:
				system("cls");
				cout<< "Dosen Pengampu: Bias Yulisa Geni, S.Kom., M.Kom.\n"
					<< "Muhammad Rafli Yusrianto 411221216\n"
					<< "Elia Eva Setyawati 411221114\n"
					<< "Ananda Raihan Eka Prasetya 411221180\n"
					<< "Naufal Adhi Ramadhan 411221126\n";
				return 0;
				break;
			default:
				system("cls");
				cout << "\nMaaf, Pilihan yang anda pilih tidak tersedia!";
		}
		getch();
	}
	while(pilihan != 5);
}