//pointer dengan string
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct KTM
{
	long int nim;
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

int main ()
{
	cout <<"\t\tKartu Tanda Mahasiswa\n";
	cout <<"\t\t\n\tNama Mahasiswa	: Elia Eva Setyawati";
	cout <<"\t\t\n\tNomor Induk Mahasiswa : 101010\n\n";
	
//isi data KTM
	struct KTM *identitas, kartu;
	kartu.nim = 101010;
	kartu.nama= "Elia Eva Setyawati";
	kartu.ttl= "Bekasi, 15-08-2002";
	kartu.jenis_kelamin="Perempuan";
	kartu.prodi="Teknik Informatika";
	kartu.universitas="Universitas Dian Nusantara";
	kartu.agama = "Islam";
	kartu.status_perkawinan = "Belum Kawin";
	kartu.pekerjaan = "Mahasiswa";
	kartu.kewarganegaraan = "WNI";
	kartu.berlaku = "Seumur Hidup";
	
	//variabel pointer identitas
	//diatur menunjuk ke variabel kartu
	identitas = &kartu;
	
	//mengakses data melalui variabel pointer identitas
	cout <<"Nomor Induk Mahasiswa (NIM)\t : " <<identitas->nim<<endl;
	cout <<"Nama\t\t\t\t : " <<identitas->nama<<endl;
	cout <<"Tempat Tanggal Lahir\t\t : " <<identitas->ttl<<endl;
	cout <<"jenis Kelamin\t\t\t : " <<identitas->jenis_kelamin<<endl;
	cout <<"Prodi\t\t\t\t : " <<identitas->prodi<<endl;
	cout <<"universitas\t\t\t : " <<identitas->universitas<<endl;
	cout <<"Agama\t\t\t\t : " <<identitas->agama<<endl;
	cout <<"Status Perkawinan\t\t : " <<identitas->status_perkawinan<<endl;
	cout <<"Pekerjaan\t\t\t : " <<identitas->pekerjaan<<endl;
	cout <<"Kewarganegaraan\t\t\t : " <<identitas->kewarganegaraan<<endl;
	cout <<"berlaku Hingga\t\t\t : " <<identitas->berlaku<<endl;
	
getch();
}
