#include <iostream>
using namespace std;

int main(){
	string nama[] = {"asep", "ade", "udin", "otong", "ubed"};
	int length = sizeof(nama) / sizeof(* nama);
	string dicari;
	int hasil;
	
	cout << "Data tersedia: " << endl;
	for(int a = 0; a < length; a++){
		cout << "Index ke-" << a << ": " << nama[a] << endl;
	}
	
	cout << "\nData yang dicari: ";
	cin >> dicari;
	
	for(int b = 0; b < length; b++){
		if(dicari == nama[b]){
			hasil++;
		}
	}
	
	if(hasil == 0){
		cout << "Data tidak ditemukan" << endl;
	} else {
		cout << "Data " << dicari << " ditemukan di ";
		for(int c = 0; c < length; c++){
			if(dicari == nama[c]){
				cout << "Index ke-" << c << endl;
			}
		}
	}
}