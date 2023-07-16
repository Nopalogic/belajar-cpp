#include <iostream>
using namespace std;

typedef struct orang{
	char nama[35];
	short umur;
} org;

main(){
	char nama[35];
	int i, x, y;
	
	cout << "Mau inputkan data berapa banyak? ";
	cin >> y;
	cout << endl; 
	
	org saya[y];

	for(i = 0; i < y; i++){
		cout << "Nama: "; cin >> saya[i].nama;
		cin.getline(nama, 35);
		cout << "Umur: "; 
		cin >> saya[i].umur;	
		cout << endl;
	}
	
	for(x = 0; x < y; x++){
		cout << "Data ke [" << x <<"] bernama " << saya[x].nama << " dan berumur " << saya[x].umur << " tahun." << endl;
		cout << endl;
	}
}