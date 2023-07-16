#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

struct stack{
	int top;
	float data[4];	
};

float data;

struct stack newStack;

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

void push(float data){
	if(isFull() == true){
		puts("Maaf, Stack penuh");
	} else {
		newStack.top++;
		newStack.data[newStack.top] = data;
	}
}

void pop(){
	if(isEmpty() == true){
		cout << "Data telah kosong!";	
	} else {
		cout << "Data yang terambil: " << newStack.data[newStack.top] << endl;
		newStack.top--;
	}
}

void print(){
	cout << "\nData yang terdapat dalam stack: \n";
	cout << "-------------------------------\n";
	
	for(int i = 0; i <= newStack.top; i++){
		cout << newStack.data[i] << " ";
	}
}

void clear(){
	newStack.top = -1;
	cout << "\nStack sekarang kosong!";
}

int main(){
	newStack.top = -1;
	
	char menu, ulang;
	
	do {
		system("cls");
		printf("\t PROGRAM STACK\n");
		printf("\t===============\n");
		printf("Menu: ");
		puts("\n1. Pop stack");
		puts("2. Pop stack");
		puts("3. Print stack");
		puts("4. Clear stack");
		puts("5. Exit");
		
		cout  << "Menu pilihan Anda: ";
		cin >> menu;
		
		if(menu == '1'){
			pop();
			ulang = 'y';
			getch();
		} else if(menu == '2'){
			cout << "\nTambah Data";
			cout << "\n-----------";
			cout << "\nData yang akan disimpan di stack: ";
			cin >> data;
			push(data);
			ulang = 'y';
		} else if(menu == '3'){
			print();
			cout << "\n\nUlang? [y/t]";
			cin >> ulang;
		} else if(menu == '4'){
			clear();
			cout << "\n\nUlang? [y/t]";
			cin >> ulang;
			
		} else if(menu == '5'){
			exit(0);
		}
	} while(ulang == 'Y' || ulang == 'y');
}