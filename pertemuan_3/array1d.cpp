#include <iostream>

using namespace std;

int main(){
// Deklarasi dan inisialisasi variabel array 'arrNilai'
// dengan 5 buah elemen berisi int.

	int arrNilai[9]={8,4,5,10,2};
	
//	menampilkan isi dari variabel 'arrNilai'
	for(int i = 0; i < 5; i++){
		cout << "Tampilkan nilai index ke-" << i <<" adalah "<< arrNilai[i];
		cout << endl;
	}
	
	return 0;
}