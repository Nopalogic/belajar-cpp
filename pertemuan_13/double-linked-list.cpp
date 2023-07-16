#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

struct dataKtp{
	string nama;
	string alamat;
	string golonganDarah;
	dataKtp *next, *prev;
} *awal = NULL, *akhir = NULL, *bantu, *baru, *hapus;

void inputDataDepan(){
	baru = new dataKtp;
	baru->next = NULL;
	baru->prev = NULL;
	
	cin.ignore();
	cout << "Nama\t\t: ";
	getline(cin, baru->nama);
	cout << "Alamat\t\t: ";
	getline(cin, baru->alamat);
	cout << "Gologan darah  : ";
	getline(cin, baru->golonganDarah);
	
	if(awal == NULL){
		awal = akhir = baru;
	} else {
		baru->next = awal;
		awal->prev = baru;
		awal = baru;
	}
	system("cls");
}

void inputDataBelakang(){
	baru = new dataKtp;
	baru->next = NULL;
	baru->prev = NULL;
	
	cin.ignore();
	cout << "Nama\t\t: ";
	getline(cin, baru->nama);
	cout << "Alamat\t\t: ";
	getline(cin, baru->alamat);
	cout << "Gologan darah  : ";
	getline(cin, baru->golonganDarah);
	
	if(awal == NULL){
		awal = akhir = baru;
	} else {
		akhir->next = baru;
		baru->prev = akhir;
		akhir = baru;
	}
	system("cls");
}

void hapusDataDepan(){
	if(awal->next = NULL){
		awal = akhir = NULL;
		cout << "Data sudah kosong";
	} else {
		hapus = awal;
		awal = awal->next;
		awal->prev = NULL;
		delete hapus;
	}
}

void outputData(){
	bantu = awal;
	
	while(bantu != NULL){
		cout << "Nama\t\t: " << bantu->nama << endl;
		cout << "Alamat\t\t: " << bantu->alamat << endl;
		cout << "Golongan darah  : " << bantu->golonganDarah << endl;
		bantu = bantu->next;
	}
}

int main(){
	int pilihan;
	
	do{
		cout<< "-----------DOUBLE LINKED LIST--------------------\n";
		cout<< "Pilih menu:\n"
			<< "1. Input data di depan\n"
			<< "2. Input data di belakang\n"
			<< "3. Hapus data di depan\n"
			<< "4. Output data\n"
			<< "Lain-lain >> EXIT\n"
			<< "Pilihan: ";
		cin >> pilihan;
		
		switch (pilihan){
			case 1:
				inputDataDepan();
				break;
			case 2:
				inputDataBelakang();
				break;
			case 3:
				hapusDataDepan();
				break;
			case 4:
				if(baru == NULL){
					cout << "Data masih kosong!\n";
				} else {
					outputData();
					break;
				}
			default:
				cout << "EXIT";
				break;
		} 
	}
		while(pilihan <= 4);
		getch();
}