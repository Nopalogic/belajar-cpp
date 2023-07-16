#include <iostream>
using namespace std;

int main(){
	int nilai[] = {45, 23, 50, 8, 12, 10, 15};
	int *xPtrNilai;
	int i;
	xPtrNilai = nilai;
	
	cout << "\nNilai PtrNilai = " << xPtrNilai;
	cout << "\nAlamat array Nilai = " << xPtrNilai;
	cout << "\nNilai yang ada pada alamat = " << xPtrNilai << " adalah " << *xPtrNilai;
	cout << "\nElemen array indeks pertama = " << nilai[0];
	cout << "\nElemen Array (dengan array) = ";
	
	for(i = 0; i < 7; i++){
		cout << nilai[i] << " ";
	}
	
	cout << "\nElemen Array (dengan pointer) = ";
	
	for(i = 0; i < 7; i++){
		cout << *(nilai + i) << " ";
	}
}