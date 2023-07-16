#include <iostream>
using namespace std ;

int main (){
	int angka [] = {29, 7, 61, 12, 66, 31, 96, 10, 8, 25, 1};
	int length = sizeof (angka)/ sizeof (* angka);
	int dtcari, hasilcari;
	cout <<"Data Tersedia : "<<endl;
	for (int a = 0; a < length ; a++){
			cout <<"Index ke- " <<a<<" : " <<angka[a]<<endl;
	}	
	cout <<"Data yang dicari : ";
	cin >> dtcari;
	for (int b = 0; b < length; b++){
		if (dtcari == angka [b]){
			hasilcari++;
		}
	}
	if (hasilcari == 0){
		cout <<"Data Tidak Ditemukan" <<endl;
	} else {
		cout <<"Data "<<dtcari<<" ditemukan di" <<endl;
		for (int c = 0 ; c < length; c++){
			if (dtcari == angka [c]){
				cout << "Index Ke-" <<c<<endl;
			}
		}
	}
}
