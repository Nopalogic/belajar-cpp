#include <iostream>
using namespace std;

int main (){
	
	cout << "===============================================================" <<endl;
	cout << "			UJIAN TENGAH SEMESTER								" <<endl;
	cout << "\nNama		: <Input sesuai Data Mahasiswa>					" <<endl;
	cout << "NIM 		: <Input sesuai Data Mahasiswa					" <<endl;
	cout << "Mata Kuliah 	: Sturuktur Data dan Algoritma					" <<endl;
	cout << "Dosen Pengampu : Bias Yulisa Geni, S.Kom., M.Kom.			" <<endl;
	cout << "===============================================================" <<endl;
	
	string nama[5];
	int usia [5];
	string prodi [5];
	string tahun_angkatan [5];
	string matkul [5];
	
	for (int i = 0; i <=4 ; i++){
		cout << "Nama Mahasiswa [" << i+1 << "] : " ;
		getline (cin, nama[i]);
	}cout << " " << endl;
	for (int j = 0; j <=4 ; j++){
		cout << "Usia [" << j+1 << "] : " ;
		cin >>usia[j];
	}cout << " " << endl;
	for (int k = 0; k <=4 ; k++){
		cout << "Program Studi [" << k+1 << "] : " ;
		cin >> prodi [k];
	}cout << " " << endl;
	for (int m = 0; m <=4 ; m++){
		cout << "Tahun Masuk [" << m+1 << "] : " ;
		cin >> tahun_angkatan [m];
	}cout << " " << endl;
	for (int n = 0; n <=4 ; n++){
		cout << "Mata Kuliah Semester ini [" << n+1 << "] : " ;
		cin >> matkul [n];
	}cout << " " << endl;
	
	int l ;
	cout << "\nMasukkan Nomor Indeks : ";
	cin >> l;
	cout << " \nNama Mahasiswa [" << l << "]=" << nama [l] << endl;
	cout << " \nUsia [" << l << "]=" << usia [l] << endl;
	cout << " \nProgram Studi [" << l << "]=" << prodi [l] << endl;
	cout << " \nTahun Masuk [" << l << "]=" << tahun_angkatan [l] << endl;
	cout << " \nMata Kuliah Semester ini [" << l << "]=" << matkul [l] << endl;	
	
	return 0;
}
