#include <iostream>
#include <conio.h>
#define maxstack 5
using namespace std;

struct STACK{
	int top;
	string data[maxstack];
};
string dta;

struct STACK buku;

bool isFull(){
	if(buku.top == maxstack)
		return true;
	else
		return false;
}

bool isEmpty(){
	if(buku.top == -1)
		return true;
	else
		return false;
}

void push(string dta){
	if(isFull() == true){
		puts("Maaf, stack penuh");
	}else{
		buku.top++;
		buku.data[buku.top] = dta;
	}
}

void pop(){
	if(isEmpty() == true){
		cout << "Data telah kosong!";
	}else{
		cout << "Data yang terambil : " <<buku.data[buku.top] << endl;
		buku.top--;
	}
}

void print(){
	printf("\nData yang terdapat dalam stack : \n");
	printf("-------------------------------------");
	for(int i=0; i<=buku.top; i++){
		cout << buku.data[i] << "  ";
	}
}

void clear(){
	buku.top = -1;
	printf("\nSekarang stack kosong");
}

int main(){
	buku.top = -1;
	
	char menu;
	char ulang;
	
	do{
		
		printf("Tugas Struktur Data dan Algoritma\n");
		printf("\tPertemuan 10\n");
		printf("Nama Anggota : \n");
		printf("1. Elia Eva Setyawati (411221114)\n");
		printf("2. Rifda Mumtaz Audami (411221129)\n");
		printf("3. Mohammed (411221135)\n");
		printf("\n");
		printf("========================================\n");
		printf("PROGRAM PENGAMBILAN BUKU DI PERPUSTAKAAN\n");
		printf("========================================\n");
		printf("Menu : ");
		puts("\n1. Pop Stack");
		puts("2. Tambah Buku");
		puts("3. Cetak");
		puts("4. Bersihkan Stack");
		puts("5. Exit");
		
		cout << "Masukan Pilihan Anda : ";
		cin >> menu;
		
		if(menu == '1'){
			pop(); 
			ulang = 'y';
			getch();
		}else if(menu == '2'){
			cout << "\nTambah Data Buku\n";
			printf("---------------------------------------\n");
			cout << "Data buku yang akan disimpan di stack : ";
			cin >> dta;
			push(dta);
			ulang = 'y';
		}else if(menu == '3'){
			print(); 
			cout << "\n\nUlang? (y/t)";
			cin >> ulang;
		}else if(menu == '4'){
			clear(); 
			cout << "\n\nUlang? (y/t)";
			cin >> ulang;
		}else if(menu == '5'){
			exit(0); 
		}
	}while(ulang == 'Y' || ulang == 'y');
}
