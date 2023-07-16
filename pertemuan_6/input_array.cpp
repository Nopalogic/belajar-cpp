#include <iostream>

using namespace std;

int main(){

	int arrNilai[5];
	
	cout << "===Mengisi Array arrNilai===" << endl;
//	mengisi elemen array
	for(int i = 0; i < 5; i++){
		cout << "Masukkan nilai: ";
		cin >> arrNilai[i];
	}
	
//	menampilkan isi dari variabel 'arrNilai'
	for(int i = 0; i < 5; i++){
		cout << "Nilai index ke " << i << " adalah " << arrNilai[i] << endl;
	}
	
	return 0;
}