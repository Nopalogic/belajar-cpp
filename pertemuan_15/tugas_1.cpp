#include <iostream>
#include <conio.h>
#include <iomanip>
#define MAX 5

using namespace std;

struct stack{
	int top;
	string judul[MAX];
	string peminjam[MAX];
} newStack;

string judul, peminjam;

bool isFull(){
	if(newStack.top == MAX){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if(newStack.top == -1){
		return true;
	} else {
		return false;
	}
}

void cariBuku(){
	if(isFull() == true){
		cout << "Maaf, peminjaman sudah penuh!";
	} else {
		cout << "\nCari Judul Buku";
		cout << "\n======================" << endl;
		cout << "Masukkan judul buku = ";
		getline(cin, judul);
		getline(cin, judul);
		cout << "Masukkan nama peminjam = ";
		getline(cin, peminjam);
		
		newStack.top++;
		newStack.judul[newStack.top] = judul;
		newStack.peminjam[newStack.top] = peminjam;
	}
}

void pinjamBuku(){
	if(isEmpty() == true){
		cout << "Tidak ada buku yang akan di pinjam!";	
	} else {
		cout << "Buku yang dipinjam = " << newStack.judul[newStack.top] << " - " << newStack.peminjam[newStack.top] << endl;
		newStack.top--;
	}
}

void print(){
	cout << "\nDaftar Buku yang akan di pinjam\n";
	cout << "=================================\n"
		 << setw(20) << "Judul Buku" <<  "	|" << setw(20) << "Peminjam"<<endl;
	
	for(int i = 0; i <= newStack.top; i++){
		cout << setw(20) << newStack.judul[i] << "	|" <<setw(20) << newStack.peminjam[i] << endl;
	}
}

void clear(){
	newStack.top = -1;
	cout << "\nBerhasil di bersihkan!";
}

void kelompok(){
	cout<<"Anggota Kelompok Jonggolan\n"
		<<"================================\n"
		<<"Naufal Adhi Ramadhan	| 411221126\n"
		<<"Galih Dika Saputra 	| 411221118\n"
		<<"Ivan Dwi Kurniawan 	| 411221121";
}

int main(){
	newStack.top = -1;
	
	char menu, ulang;
	
	do {
		system("cls");
		printf("|=========================|\n");
		printf("| PROGRAM PEMINJAMAN BUKU |\n");
		printf("|=========================|\n");
		printf("|========== Menu =========|\n");
		puts("| 1. Pinjam Buku\t  |");
		puts("| 2. Cari Buku\t\t  |");
		puts("| 3. Tampilkan Data\t  |");
		puts("| 4. Bersihkan tumpukan   |");
		puts("| 5. Exit\t\t  |");
		printf("|=========================|\n");
		
		cout  << "Menu pilihan [1-5] = ";
		cin >> menu;
		
		if(menu == '1'){
			pinjamBuku();
			ulang = 'y';
			getch();
		} else if(menu == '2'){
			cariBuku();
			ulang = 'y';
		} else if(menu == '3'){
			print();
			cout << "\n\nUlang? [Y/T] ";
			cin >> ulang;
		} else if(menu == '4'){
			clear();
			cout << "\n\nKembali Ke Menu? [Y/T] = ";
			cin >> ulang;
			
		} else if(menu == '5'){
			kelompok();
			exit(0);
		}
	} while(ulang == 'Y' || ulang == 'y');
}
