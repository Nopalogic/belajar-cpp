#include <iostream>
using namespace std;

int main (){
	int data [5];
	int *nilai;
	nilai = data;
	
	cout <<"Masukkan Data : ";
	for (int i=0; i<5; i++){
		cin>>data[i];
	}
	for (int i=0; i<5; i++){
		cout <<"Data : "<< data[i] << "Menempati alamat memori : ";
		cout <<nilai [i];
		cout <<endl;
	}
}
