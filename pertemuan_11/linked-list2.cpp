#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int pilihan;
void pilih();
void buatBaru();
void tambahBelakang();
void tambahDepan();
void hapusBelakang();
void hapusDepan();
void tampil();

struct simpul{
	char nim[8], nama[80];
	int umur;
	struct simpul *next;
} mhs, *baru, *awal = NULL, *akhir = NULL, *hapus, *bantu;

void clearScreen(){
	system("cls");
}

int main(){
	do {
		clearScreen();
		cout<< "MENU LINKED LIST\n"
			<< "1. Tambah Depan\n"	
			<< "2. Tambah Belakang\n"	
			<< "3. Hapus Depan\n"	
			<< "4. Hapus Belakang\n"	
			<< "5. Tampil\n"	
			<< "6. Selesai\n"	
			<< "Pilihan anda: ";
		
		cin >> pilihan;
		pilih();
	} while(pilihan != 6);
	return 0;
}

void pilih(){
	if(pilihan == 1){
		tambahDepan();
	} else if(pilihan == 2){
		tambahBelakang();
	} else if(pilihan == 3){
		hapusDepan();
	} else if(pilihan == 4){
		hapusBelakang();
	} else if(pilihan == 5){
		tampil();	
	} else {
		cout << "Pilihan tidak ditemukan";
	}
}

void buatBaru(){
	baru = (simpul*)malloc(sizeof(struct simpul));
	
	cout << "Input NIM: ";
	cin >> baru->nim;
	cout << "Input Nama: ";
	cin >> baru->nama;
	cout << "Input Umur: ";
	cin >> baru->umur;
	
	baru->next = NULL;
}

void tambahBelakang(){
	buatBaru();
	if(awal == NULL){
		awal = baru;
	} else {
		akhir->next = baru;
	}
	
	akhir = baru;
	akhir->next  = NULL;
	
	cout <<  endl << endl;
	
	tampil();
}

void tambahDepan(){
	buatBaru();
	
	if(awal == NULL){
		awal = baru;
		akhir = baru;
		akhir->next = NULL;
	} else {
		baru->next = awal;
		awal = baru;
	}
	cout << endl << endl;
	tampil();
}

void hapusDepan(){
	if(awal == NULL){
		cout << "Kosong";;
	} else {
		hapus = awal;
		awal = awal->next;
		free(hapus);
	}
	cout << endl << endl;
	tampil();
}

void hapusBelakang(){
	if(awal == NULL){
		cout << "Kosong";
	} else if(awal == akhir) {
		hapus = akhir;
		awal = awal->next;
		free(hapus);
	} else {
		hapus = awal;
		while(hapus->next != akhir){
			hapus = hapus->next;
		}
			akhir = hapus;
			hapus = akhir->next;
			akhir->next = NULL;
			free(hapus);
	}
	cout << endl << endl;
	tampil();
}

void tampil(){
	if(awal == NULL){
		cout  << "Kosong";
	} else {
		bantu = awal;
		while(bantu != NULL){
			cout << "NIM: " << bantu->nim << endl;
			cout << "NAMA: " << bantu->nama << endl;
			cout << "UMUR: " << bantu->umur << endl;
			bantu = bantu->next;
		}
		cout << endl;
	}
	getch();
}