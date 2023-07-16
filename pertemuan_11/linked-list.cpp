#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head, *tail;

void init(){
	head = NULL;
	tail = NULL;
}

int isEmpty(){
	if(tail == NULL){
		return 1;
	} else {
		return 0;
	}
}

void insert(int dataBaru){
	Node *baru;
	baru = new Node;
	
	baru->data = dataBaru;
	baru->next = NULL;
	
	if(isEmpty() == 1){
		head = tail = baru;
		tail->next = NULL;
	} else {
		baru->next = head;
		head = baru;	
	}
	cout << "Data masuk\n";
}

void tampil(){
	Node *bantu;
	bantu = head;
	
	if(isEmpty() == 0){
		while(bantu != NULL){
			cout << bantu->data << " ";
			bantu = bantu->next;
		}
	} else {
		cout << "Masih Kosong" << endl;
	}
}

void hapusDepan(){
	Node *hapus;
	int d;
	
	if(isEmpty() == 0){
		if(head != tail){
			hapus = head;
			d = hapus->data;
			head = head->next;
			delete hapus;
		} else {
			d = tail->data;
			head = tail = NULL;
		}
		cout << d << " terhapus";
	} else  {
		cout << "Masih kosong" << endl;
	}
}

void clear(){
	Node *bantu, *hapus;
	bantu = head;
	
	while(bantu != NULL){
		hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = NULL;
	cout << "clear";
}

int main(){
	int pilihan, dataBaru;
	
	do {
		system("cls");
		cout << endl;
		cout<< "============================\n"
			<< "=   PROGRAM LINKED LIST    =\n"
			<< "============================\n"
			<< "=   1. Insert Depan        =\n"
			<< "=   2. Delete Depan        =\n"
			<< "=   3. Tampil Data         =\n"
			<< "=   4. Clear               =\n"
			<< "=   5. Exit                =\n"
			<< "============================\n";
		cout << "Masukan piihan: ";
		cin >> pilihan;
		
		switch(pilihan){
			case 1:
				system("cls");
				cout << "Masukan data: ";
				cin >> dataBaru;
				insert(dataBaru);
				break;
			case 2:
				system("cls");
				hapusDepan();
				break;
			case 3:
				system("cls");
				tampil();
				break;
			case 4:
				system("cls");
				clear();
				break;
			case 5:
				system("cls");
				return 0;
				break;
			default:
				system("cls");
				cout << "\nMaaf, Pilihan yang anda pilih tidak tersedia!";
		}
		getch();
	}
	while(pilihan != 7);
}