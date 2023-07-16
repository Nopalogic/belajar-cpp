#include <iostream>
using namespace std;

int main(){
	string nama[] = {
		"Nopal","Asep","Otong","Saep","Ubed",
		"Dedi","Yogi","Deni","Sugih","Esep",
		"Kaissa","Deva","Ajeung","Zahra","Icha",
		"Astri","Heni","Turenih","Sukini","Cucun",
	};

	int length = sizeof(nama)/sizeof(*nama);
	
	string matkul[] = {"Algoritman dan Pemrograman 2","Keamanan Sistem Informasi","Struktur Data"};
	int len = sizeof(matkul)/sizeof(*matkul);
	
	int prestasi[6];	
	int al[20], ks[20], sd[20], status[20];
	float avg[20];
	
//	input process
	int x = 0;
	while(x < len){
		cout  << "Input Nilai " << matkul[x] << endl;
		if(x == 0){
			for(int i = 0; i < length; i++){
				cout << nama[i] << "\t: ";
				cin >> al[i];
			}
		} else if(x == 1){
			for(int i = 0; i < length; i++){
				cout << nama[i] << "\t: ";
				cin >> ks[i];
			}
		} else {
			for(int i = 0; i < length; i++){
				cout << nama[i] << "\t: ";
				cin >> sd[i];
			}
		}
		cout << endl;
		x++;
	}
	
//	filter process
	for(int i = 0; i < length; i++){
		avg[i] = (al[i] + ks[i] + sd[i])/3; 
		
		status[i] = 0;
		if(al[i] < 60 || ks[i] < 60 || sd[i] < 60){
			status[i]++;
		}
	}
		
//	merge proses
	int j = 0;
	for(int i = 0; i < length; i++){
		if(avg[i] > 80 && status[i] == 0){
			prestasi[j] = i;
			j++;
		}
	}

	cout << "Nilai Algoritma dan Pemrograman 2" << endl;
	for(int i = 0; i < length; i++){
		cout << al[i] << " ";
	}
	cout << endl;
	
	cout << "Nilai Keamanan Sistem Informasi" << endl;
	for(int i = 0; i < length; i++){
		cout << ks[i] << " ";
	}
	cout << endl;
	
	cout << "Nilai Struktur Data" << endl;
	for(int i = 0; i < length; i++){
		cout << sd[i] << " ";
	}
	cout << endl;
	
	
	cout << "Nomor index mahasiswa berprestasi" << endl;
	for(int i = 0; i < 6; i++){
		cout << prestasi[i] << " ";
	}
	
	return 0;
}