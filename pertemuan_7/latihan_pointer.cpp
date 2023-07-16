#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct KTM {
	int nim;
	string nama;
	string ttl;
	string jenis_kelamin;
	string prodi;
	string universitas;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku;
};

int main(){
	cout << "\t\tKartu Tanda Mahasiswa\n";
	cout << "\t\t\n\tNama Mahasiswa  : Elia Eve Setyawati";
	cout << "\t\t\n\tNomor Induk Mahasiswa  : 101010\n\n";
	
//	

	struct KTM *identitas, kartu;
	kartu.nim = 101010;
	kartu.nama = "Elia Eva Setyawati";
	kartu.ttl = "Bekasi, 15-08-2002";
	kartu.jenis_kelamin = "Perempuan";
	kartu.prodi = "Teknik Informatika";
	kartu.universitas = "Universitas Dian Nusantara";
	kartu.agama = "Islam";
	kartu.status_perkawinan = "Belum kawin";
	kartu.pekerjaan = "Mahasiswa";
	kartu.kewarganegaraan = "WNI";
	kartu.berlaku = "Seumur hidup";
	
	identitas = &kartu;
	
//	
	cout << "Nomor Induk Mahasiswa (NIM)\t:" << identitas->nim << endl;
	cout << "Nama\t\t\t\t:" << identitas->nama << endl;
	cout << "Tempat Tanggal Lahir\t\t:" << identitas->ttl << endl;
	cout << "Jenis kelamin\t\t\t:" << identitas->jenis_kelamin << endl;
	cout << "Prodi\t\t\t\t:" << identitas->prodi << endl;
	cout << "Universitas\t\t\t:" << identitas->universitas << endl;
	cout << "Agama\t\t\t\t:" << identitas->agama << endl;
	cout << "Status perkawinan\t\t:" << identitas->status_perkawinan << endl;
	cout << "Pekerjaan\t\t\t:" << identitas->pekerjaan << endl;
	cout << "Kewarganegaraan\t\t\t:" << identitas->kewarganegaraan << endl;
	cout << "Berlaku hingga\t\t\t:" << identitas->berlaku << endl;
	
	getch();
}