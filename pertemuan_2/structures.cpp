#include <iostream>
#include <conio.h>

using namespace std;

struct buku{
	char judul[35];
	int tahun_terbit;
	int harga;
};

int main(){
	buku book;
	
		cout << "Judul buku: ";
		cin.getline(book.judul, 35);
		cout  << "Tahun terbit: "; cin >> book.tahun_terbit; 
		cout  << "Harga       : "; cin >> book.harga; 
		cout << "Data buku yang terdaftar" << endl;
		cout << "\nJudul buku \t:" << book.judul;
		cout << "\nTahun terbit \t:" << book.tahun_terbit;
		cout << "\nHarga \t\t:" << book.harga;
		getch();
}