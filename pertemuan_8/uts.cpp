#include <iostream>
using namespace std;

int main(){
	string arrDataMahasiswa[5][5] = {
		{"ANANDA AKHIRATRI","ERIENDA DESTRI ARIESTANTI","HAMID MUHAMMAD SAIFUL ZAMAN","IVAN DWI KURNIAWAN","ANANDA SALWA FITRIA"},
		{"19","20","21","18","19"},
		{"TI","TI","TI","TI","TI"},
		{"2022","2022","2022","2022","2022"},
		{"DB","Statistik","Matdisk","SO","RPL"}
	};
	int searchIndex, length = sizeof(arrDataMahasiswa)/sizeof(*arrDataMahasiswa);
	
	cout << "===========================================================================" << endl;
	cout << "                           UJIAN TENGAH SEMESTER                           " << endl;
	
	cout << "Nama\t\t: Naufal Adhi Ramadhan" << endl; 
	cout << "NIM\t\t: 411221126"  << endl;
	cout << "Mata Kuliah\t: Struktur Data dan Algoritma" << endl;
	cout << "Dosen Pengampu\t: Bias Yulisa Geni, S.Kom., M.Kom." << endl;
	cout << "===========================================================================" << endl;
	
	for(int i = 0; i < length; i++){
		if(i == 0){
			for( int j = 0; j < length; j++){
				cout << "Nama Mahasiswa [" << j + 1 << "] : " << arrDataMahasiswa[i][j] << endl;
			}
			cout << endl;
		} else if(i == 1){
			for( int j = 0; j < length; j++){
				cout << "Usia [" << j + 1 << "] : " << arrDataMahasiswa[i][j] << endl;
			}
			cout << endl;
			
		} else if(i == 2){
			for( int j = 0; j < length; j++){
				cout << "Program Studi [" << j + 1 << "] : " << arrDataMahasiswa[i][j] << endl;
			}
			cout << endl;
		} else if(i == 3){
			for( int j = 0; j < length; j++){
				cout << "Tahun Masuk [" << j + 1 << "] : " << arrDataMahasiswa[i][j] << endl;
			}
			cout << endl;
		} else {
			for( int j = 0; j < length; j++){
				cout << "Mata Kuliah Semester ini [" << j + 1 << "] : " << arrDataMahasiswa[i][j] << endl;
			}
			cout << endl;
		}
	}
	
//	Searching array section
	cout << "Masukkan nomor index: "; cin >> searchIndex;
	cout << endl;
	
//  jika ingin sesuai dengan index pada list di atas, uncomment code di bawah
//	searchIndex -= 1; 
	for(int i = 0; i < length; i++){
		if(i == 0){
			for( int j = 0; j < 1; j++){
				cout << "Nama Mahasiswa [" << j + 1 << "]=" << arrDataMahasiswa[i][searchIndex] << endl;
			}
			cout << endl;
		} else if(i == 1){
			for( int j = 0; j < 1; j++){
				cout << "Usia [" << j + 1 << "]=" << arrDataMahasiswa[i][searchIndex] << endl;
			}
			cout << endl;
		} else if(i == 2){
			for( int j = 0; j < 1; j++){
				cout << "Program Studi [" << j + 1 << "]=" << arrDataMahasiswa[i][searchIndex] << endl;
			}
			cout << endl;
		} else if(i == 3){
			for( int j = 0; j < 1; j++){
				cout << "Tahun Masuk [" << j + 1 << "]=" << arrDataMahasiswa[i][searchIndex] << endl;
			}
			cout << endl;
		} else {
			for( int j = 0; j < 1; j++){
				cout << "Mata Kuliah Semester ini [" << j + 1 << "]=" << arrDataMahasiswa[i][searchIndex] << endl;
			}
			cout << endl;
		}
	}
}