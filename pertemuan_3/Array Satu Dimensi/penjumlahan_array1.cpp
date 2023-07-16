#include <iostream>

using namespace std;

int main(){

     // Deklarasi array 'ARnilai' dengan 5 buah elemen berisi int
     int ARnilai[5];
     int tampung = 0;

     cout<<"=========================================";
     cout<<"\n= Program Menjumlahkan Semua Elemen Array =\n";
     cout<<"=========================================\n";

     // Mengisi nilai ke dalam elemen array
     cout<<"\n== Isi Array ==\n";
     for(int i=0; i<5;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ARnilai[i];
     }

     for(int i=0; i<5;i++){
          tampung = tampung + ARnilai[i];
     }

     cout<<"\nHasil Penjumlahan semua elemen Array : "<<tampung;

     return 0;
}
