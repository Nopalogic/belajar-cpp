#include <iostream>
using namespace std;

int main(){
	int y;
	
	cout << "Masukan banyak array: ";
	cin >> y;
	
	
	int umur[y];
	string nama[y];
	for(int i = 0; i < y; i++){
		cout << "Masukan Nama: ";
		cin >>nama[i];
		cout << "Masukan umur: ";
		cin >> umur[i];
		cout << endl;
	}
	
	for (int i = 1; i < y; i++) {
        string keyName = nama[i];
        int keyAge = umur[i];
        int j = i - 1;
        while (j >= 0 && nama[j] < keyName) {
            nama[j+1] = nama[j];
            umur[j+1] = umur[j];
            j--;
        }
        nama[j+1] = keyName;
        umur[j+1] = keyAge;
    }

	for(int i = 0; i < y; i++){
		cout << nama[i] << " berumur " << umur[i]  << endl;
	}
}