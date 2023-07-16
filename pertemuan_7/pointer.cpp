#include <iostream>

using namespace std;

int main(){
	int x = 8;
	int *xPtr;
	xPtr = &x;
	
	cout << "Nilai x = " << x << endl;
	cout << "Alamat x = " << &x << endl;
	cout << "Alamat x = " << xPtr << endl;
	cout << "Nilai yang disimpan pada alamat" << endl;
	cout << xPtr << " adalah " << *xPtr << endl;
	
//	references (*) -> menyimpan alamat dari variable di memori
//  dereference (&) -> mengetahui alamat dari suatu variable
}