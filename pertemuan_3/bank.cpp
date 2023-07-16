#include <iostream>
using namespace std;

int main(){

	int noAntre[10];
	int nilai;
	string status = "Tidak ditemukan.";

	cout << "===no antre===" << endl;
	for(int i = 0; i <10; i++){
		cout << "Masukkan no. antrean: ";
		cin >> noAntre[i];
	}
	cout << endl;
	
	cout << "Cari: ";  cin >> nilai;
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		if(noAntre[i]==nilai){
			cout << "Nilai " << noAntre[i] << " adalah index ke " << i << endl;
			status = "Ditemukan.";
		}
	}
	
	if(status == "Tidak ditemukan."){
		cout << "No. antrean ke " << nilai << " tidak ditemukan.";
	}
	
	return 0
}