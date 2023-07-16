#include <iostream>
using namespace std;

int main (){
	string a = "bakwan";
	int b ;
	
	string *c = &a ;
	string d = *c;
	cout << "Alamat a : " << &a << endl;
	cout << "Alamat b : " << &b << endl;
	cout << "Alamat c : " << c << endl;
	cout << "Alamat d : " << d << endl;
	
	//* references -> menyimpan alamat dari variabel di memori
	//& difference -> megertahui alamat dari suatu variabel
	
}
