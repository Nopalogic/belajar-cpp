#include <iostream>
using namespace std;
int main()
{
   string nama[10];
   int jumlah_gol[10];
   int jam_kerja[10];
   int jam_lembur[10];
   int gaji_pokok[10];
   int gaji_lembur[10];
   int pajak_gapok[10];
   int pajak_lembur[10];
   int tunjangan[10];
   int total_pajak[10];
   int gaji_diterima[10];
	cout<<"================================================"<< endl;
	cout<<"             UJIAN TENGAN SEMESTER              "<< endl;
	cout<< endl;
	cout<<"Nama           : Ananda Salwa Fitria " << endl;
	cout<<"Nim            : 411221215 " << endl;
	cout<<"Mata Kuliah    : Struktur data dan Algoritma" << endl;
	cout<<"Dosen Pengampu : Biasa Yulisa Geni S,Kom. M,Kom " <<endl;
	cout<<"================================================="<<endl;
   cout<<"Masukan Jumlah Karyawan  : ";
   int s,n;
   cin>>n;
   cout<<endl;
	
   for (int s=1;s<=n;s++){
        cout<<"PEGAWAI KE-"<<s<<endl;
	cout<<"Masukan Nama              : ";
	cin>>nama[s];
	cout<<"Masukan Golongan          : ";
	cin>>jumlah_gol[s];
	cout<<"Masukan Jumlah Jam Kerja  : ";
	cin>>jam_kerja[s];
	
	switch (jumlah_gol[s]){
		case 1 : 
			gaji_pokok[s]=5200000;
			tunjangan[s]=250000;
			break;
		case 2 :
			gaji_pokok[s]=5500000;
			tunjangan[s]=350000;
			break;
		case 3 :
			gaji_pokok[s]=5800000;
			tunjangan[s]=500000;
			break;
		case 4 :
			gaji_pokok[s]=6200000;
			tunjangan[s]=750000;
			break;
		default :
			gaji_pokok[s]=0;
			tunjangan[s]=0;	
	}
	
	if (jam_kerja[s]>173){
	    jam_lembur[s]=jam_kerja[s]-173;	
	}else{
	     jam_lembur[s]=0;
	}
	
	gaji_lembur[s]=jam_lembur[s]*20000;
	pajak_gapok[s]=0.05*gaji_pokok[s];
	pajak_lembur[s]=0.05*gaji_lembur[s];
	total_pajak[s]=pajak_gapok[s]+pajak_lembur[s];
	total_pajak[s]=((gaji_pokok[s]+tunjangan[s]+gaji_lembur[s])-total_pajak[s]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int s=1;s<=n;s++){
		
		cout<<"     KARYAWAN KE-"<<s<<endl;
		cout<<"Nama                 : "<<nama[s]<<endl;
		cout<<"Gaji Pokok           : "<<gaji_pokok[s]<<endl;		
		cout<<"Gaji Lembur          : "<<gaji_lembur[s]<<endl;
		cout<<"Pajak Gaji Pokok     : "<<pajak_gapok[s]<<endl;
		cout<<"Pajak Lembur         : "<<pajak_lembur[s]<<endl;
		cout<<"Total Pajak          : "<<total_pajak[s]<<endl;
		cout<<"Tunjangan Pengabdian : "<<tunjangan[s]<<endl;
		cout<<"Gaji Diterima        : "<<total_pajak[s]<<endl;
		cout<<endl<<endl;	
	}	


}
