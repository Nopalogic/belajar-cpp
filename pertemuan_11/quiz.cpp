#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;

int pilihan;

struct simpul {
	string matkul, jurusan;
	int semester, sks;
	struct simpul *next;
} mhs, *baru, *awal = NULL, *akhir = NULL, *hapus, *bantu;

void clearScreen(){
	system("cls");
}

void buatBaru(){
	baru = new simpul;
	
	cout << "Input Nama Mata Kuliah\t: ";
	cin.ignore();
	getline(cin, baru->matkul);

	cout << "Input Semester\t\t: ";
	cin >> baru->semester;
	
	cout << "Input Jurusan\t\t: ";
	cin.ignore();
	getline(cin, baru->jurusan);

	cout << "Input Jumlah SKS\t: ";
	cin >> baru->sks;
	
	baru->next = NULL;
}

void tampil(){
	if(awal == NULL){
		cout  << "Kosong";
	} else {
		bantu = awal;
		while(bantu != NULL){
			cout << "Nama Mata Kuliah\t: " << bantu->matkul << endl;
			cout << "Semester\t\t: " << bantu->semester << endl;
			cout << "Jurusan\t\t\t: " << bantu->jurusan << endl;
			cout << "Jumlah SKS\t\t: " << bantu->sks << endl;
			bantu = bantu->next;
		}
		cout << endl;
	}
	getch();
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
	}
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