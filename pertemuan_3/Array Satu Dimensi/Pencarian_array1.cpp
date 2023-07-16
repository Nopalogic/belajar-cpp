#include <iostream>

using namespace std;

int main(){

     // Deklarasi array 'ARnilai' dengan 5 buah elemen berisi int
     int ARnilai[5];
     int nilaidicari;
     string status = "belum ketemu";

     cout<<"==============================";
     cout<<"\n== Mencari nilai (N) pada Array ==\n";
     cout<<"==============================\n";

     // Mengisi nilai ke dalam elemen array
     cout<<"\n== Isi Array ==\n";
     for(int i=0; i<5;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ARnilai[i];
     }

     cout<<"\nMasukkan nilai yang dicari = ";cin>>nilaidicari;

     for(int i=0; i<5;i++){
          if(ARnilai[i]==nilaidicari){
               cout<<"\nNilai yang dicari ("<<nilaidicari<<") ditemukan di indek ke ["<<i<<"]\n";
               status = "ketemu";
               break;
          }
     }

     if (status == "belum ketemu"){
          cout<<"\nNilai yang dicari ("<<nilaidicari<<") tidak ditemukan\n";
     }

     return 0;
}
