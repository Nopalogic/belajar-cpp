#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Pasien{
	string penyakit;
	string nama;
	string alamat;
	string kelamin;
	int lamaInap;
	string kamar;
	string dokter;
	int totalBiaya;
	Pasien *prev;
	Pasien *next;
} *head = NULL, *tail = NULL;

void newPasien(){
	Pasien *newPasien = new Pasien;
	
	char lagi;
	int dokter, lama, kamar, harga, jasa;
	int dibayar;
	int total;
	int kembali;
	
	cin.ignore();
	cout<<"masukkan nama anda       =";
	getline(cin, newPasien->nama);
	cout<<endl;
		
	cout<<"Masukkan Alamat Anda     =";
	getline(cin, newPasien->alamat);
	cout<<endl;
		
	cout<<"Masukkan Jenis Kelamin   =";
	getline(cin, newPasien->kelamin);
	cout<<endl;
		
	cout<<"Masukkan Lama Menginap   =";
	cin>>newPasien->lamaInap;
	cout<<endl;
		
	cout<<" Jenis Kamar "<<endl;
	cout<<" 1.Kelas I   "<<endl;
	cout<<" 2.Kelas II  "<<endl;
	cout<<" 3.Kelas III "<<endl;
	cout<<" 4.Kelas VIP "<<endl;
	cout<<" 5.Kelas VVIP"<<endl;
	cout<<"Pilih Jenis Kamar Anda[1-5] =";
	cin>>kamar;
	
	switch(kamar){
	    case 1:
			harga=800000;
		    newPasien->kamar = "Kelas I";
		    cout<<"Tarif 800000"<<endl;
		    break;
		case 2:
			harga=600000;
		    newPasien->kamar = "Kelas II";
		    cout<<"Tarif 800000"<<endl;
		    break;
		case 3:
			harga=300000;
		    newPasien->kamar = "Kelas III";
		    cout<<"Tarif 800000"<<endl;
		    break;
		case 4:
			harga=800000;
		    newPasien->kamar = "Kelas VIP";
		    cout<<"Tarif 1300000"<<endl;
		    break;
		case 5:
		    harga=1500000;
		   	newPasien->kamar = "Kelas VVIP";
		   	cout<<"Tarif 150000"<<endl;
		   	break;
	    default:
		    cout<<"Tidak Tersedia";
	}
	cout<<endl;
	
    cout<<" Dokter "<<endl;
	cout<<" 1.Dokter Anak"<<endl;
	cout<<" 2.Dokter Penyakit Dalam"<<endl;
	cout<<" 3.Dokter THT"<<endl;
    cout<<" 4.Dokter Bedah"<<endl;
	cout<<" 5.Dokter Umum"<<endl;
	cout<<"Masukkan Pilihan Anda[1-5] =";
    cin>>dokter;
	
	switch(dokter){
	    case 1:
	    	jasa=70000;
		    newPasien->dokter = "Dokter Anak";
			cout<<"Tarif 70000"<<endl;
			break;
		case 2:
			jasa=80000;
			newPasien->dokter = "Dokter Penyakit Dalam";
		    cout<<"Tarif 80000"<<endl;
			break;
		case 3:
			jasa=60000;
			newPasien->dokter = "Dokter THT";
		    cout<<"Tarif 60000"<<endl;
		    break;
		case 4:
		    jasa=100000;
		    newPasien->dokter = "Dokter Bedah";
		    cout<<"Tarif 100000"<<endl;
		    break;
		case 5:
		    jasa=50000;
		    newPasien->dokter = "Dokter Umum";
		    cout<<"Tarif 50000"<<endl;
		    break;
		default:
		    cout<<"Tidak Tersedia"<<endl;
	}
	newPasien->totalBiaya = (harga * lama) + jasa;
	
	if (head == NULL) {
    	head = newPasien;
		tail = newPasien;
    } else {
        tail->next = newPasien;
        newPasien->prev = tail;
        tail = newPasien;
    }
	system("pause");
}

void showData(){
	Pasien *pasien = head;
	string nama;
	int dibayar, kembali;
	
	system("cls");
	while(true){
		cin.ignore();
		cout << "Masukkan nama pasien: ";
    	getline(cin, nama);
	
		if(nama == pasien->nama){
			system("cls");
			cout<<"++++++++++DATA ANDA++++++++++"<<endl;
			cout<<"Nama Anda            :"<< pasien->nama <<endl;
		    cout<<"Alamat Anda          :"<< pasien->alamat <<endl;
			cout<<"Jenis Kelamin        :"<< pasien->kelamin <<endl;
		    cout<<"Lama Menginap        :"<< pasien->lamaInap << " hari" <<endl;
			cout<<"Jenis Kamar          :"<< pasien->kamar <<endl;
		    cout<<"Dokter               :"<< pasien->dokter <<endl;
		    cout<<"Yang Harus Dibayar   :"<< pasien->totalBiaya <<endl;
		    cout<<"Bayar                :";
		    cin >> dibayar;
		    
		    kembali = dibayar - pasien->totalBiaya;
		    
		    cout<<"Kembali              :" << kembali << endl;
		    
			break;
		} else {
			cout << "Pasien tidak ditemukan." << endl;
		}
		pasien->next;
	}
	system("pause");	
}

int main(){
	int pilih;
	
	while(true){
		system("cls");
		cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"===============Rumah BEYEGE================="<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"            Pilih Menu Dibawah          "<<endl;
		cout<<"      1. Pasien Baru"<<endl;
		cout<<"      2. Cari Data Pasien"<<endl;
		cout<<"      3. Keluar"<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Menu: ";		
		cin >> pilih;
		
		switch(pilih){
			case 1:
				system("cls");
				newPasien();
				break;
			case 2:
				showData();
				break;
			case 3:
		    	cout<<"Terima Kasih Atas Kunjungan Anda di Rumah Sakit BEYEGE"<<endl;
				exit(0);
			default:
				cout << "Pilihan tidak tersedia.";
		}
	}
	return 0;
}
