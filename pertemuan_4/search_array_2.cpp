#include <iostream>
using namespace std;

int main(){
	int angka[] = {29, 7, 61, 13, 66, 31, 96, 10, 88, 25, 1};
	int length = sizeof(angka) / sizeof(* angka);
	int dicari, hasil;
	
	cout << "Data tersedia: " << endl;
	for(int a =0; a < length; a++){
		cout << "Index ke- " << a << ": " << angka[a] << endl;
	}
	
	cout << "\nData yang dicari: ";
	cin >> dicari;
	
	for(int b = 0; b < length; b++){
		if(dicari == angka[b]){
			hasil++;
		}
	}
	
	if(hasil == 0){
		cout << "Data tidak ditemukan" << endl;
	} else {
		cout << "Data " << dicari << " ditemukan di ";
		for(int c = 0; c < length; c++){
			if(dicari == angka[c]){
				cout << "Index ke-" << c << endl;
			}
		}
	}
}