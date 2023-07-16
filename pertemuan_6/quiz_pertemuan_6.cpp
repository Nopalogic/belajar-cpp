#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int jumlahProdi, jumlahTA;
	
	cout << "Masukan jumlah Tahun Ajaran: ";
	cin >> jumlahTA;
	
	cout << "Masukan jumlah Prodi: ";
	cin >> jumlahProdi;
	cout << endl;
	
	int arrProdi[jumlahTA][jumlahProdi], arrDataKelulusan[jumlahTA][2 + jumlahProdi], arrTA[jumlahTA], averageTA[jumlahProdi],averageProdi[jumlahTA];
	string arrNamaProdi[jumlahProdi];
	int i, j, total, indexPosition;
	
	string header[1+jumlahProdi]={"TA"};
	int length = sizeof(header)/sizeof(*header);
	
//	----------------------------------------
	for(i = 0; i < jumlahProdi; i++){
		cout << "Masukkan nama prodi: ";
		cin >> arrNamaProdi[i];
	}
	cout << endl;
	
	for(i = 0; i < jumlahTA; i++){
		cout << "Masukkan Tahun Ajaran: ";
		cin >> arrTA[i];
		for(j = 0; j < jumlahProdi; j++){
			cout << "Masukkan jumlah lulusan prodi " << arrNamaProdi[j] << ": ";
			cin >> arrProdi[i][j];
		}
		cout << endl;
	}
	
//	----------------------------------------	
	for(i = 0; i < jumlahProdi; i++){
		total = 0;
		for(j = 0; j < jumlahProdi; j++){
			total += arrProdi[i][j];
		}
		averageTA[i] = total / jumlahProdi;	
	}
	
	for(i = 0; i < jumlahTA; i++){
		total = 0;
		for(j = 0; j < jumlahTA; j++){
			total += arrProdi[j][i];
		}
		averageProdi[i] = total / jumlahTA;	
	}
	
//	----------------------------------------
	for(i = 1; i < length; i++){
		header[i] = arrNamaProdi[i-1];
	}
	
	for(i = 0; i < jumlahTA; i++){
		arrDataKelulusan[i][0] = arrTA[i];
	}
	
	indexPosition = 0;
	for(int i = 0; i < jumlahTA; i++){
		for(j = 1; j < (jumlahProdi + 1); j++){
			arrDataKelulusan[i][j] = arrProdi[i][j-1];
			indexPosition++;
		}
	}
	
	for(i = 0; i < jumlahTA; i++){
		arrDataKelulusan[i][indexPosition-1] = averageTA[i];
		indexPosition++;
	}	
	
///	----------------------------------------
	
	cout << "======================================" << endl;
	
	for(i = 0; i < length; i++){
		cout << setw(6) << header[i];
	}
	cout << endl;
	
	for(i = 0; i < jumlahTA; i++){
		for(j = 0; j < (jumlahProdi + 2); j++){
			cout << setw(6) << arrDataKelulusan[i][j];
		}
		cout << endl;
	}
	
	cout << "          " << averageProdi[0] << "    " << averageProdi[1];
	
	cout << endl;

	cout << "======================================" << endl;
	
	return 0;
}