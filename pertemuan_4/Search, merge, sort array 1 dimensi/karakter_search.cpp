#include <iostream>
using namespace std ;

int main (){
	string nama [] = {"Adelwis", "Mawar", "Melati", "Adelwis"};
	int length = sizeof (nama)/ sizeof (* nama);
	string dtcari;
	int hasilcari;
	cout <<"Data Tersedia : "<<endl;
	for (int a = 0; a < length ; a++){
			cout <<"Index ke- " <<a<<" : " <<nama[a]<<endl;
	}	
	cout <<"Data yang dicari : ";
	cin >> dtcari;
	for (int b = 0; b < length; b++){
		if (dtcari == nama [b]){
			hasilcari++;
		}
	}
	if (hasilcari == 0){
		cout <<"Data Tidak Ditemukan" <<endl;
	} else {
		cout <<"Data "<<dtcari<<" ditemukan di" <<endl;
		for (int c = 0 ; c < length; c++){
			if (dtcari == nama [c]){
				cout << "Index Ke-" <<c<<endl;
			}
		}
	}
}
