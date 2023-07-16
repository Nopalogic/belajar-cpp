#include <iostream>
using namespace std;

int main (){
	int x = 8;
	int *xPtr;
	xPtr = &x;
	
	cout <<"Nilai x = " <<x<<endl;
	cout <<"Alamat x = " <<&x<<endl;
	cout <<"Alamat x = " <<xPtr<<endl;
	cout <<"Nilai yang disimpan pada alamat";
	cout <<xPtr<< "adalah" <<*xPtr;
	
	//* references -> menyimpan alamat dari variabel di memori
	//& difference -> megertahui alamat dari suatu variabel	
}
