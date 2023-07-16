#include <iostream>

using namespace std;

int main(){
     // Deklarasi array 'ARnilai' dengan 5 buah elemen berisi int
     int ARnilai[5];

     // Mengisi nilai ke dalam elemen array
     cout<<"== Mengisi Array ARnilai ==\n";
     for(int i=0; i<5;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ARnilai[i];
     }

     // Menampilkan nilai atau isi dari array 'ARnilai'
     for(int i=0; i<5;i++){
          cout<<"\nTampil nilai indek ke ["<<i<<"] = "<<ARnilai[i];
     }

     return 0;
}
