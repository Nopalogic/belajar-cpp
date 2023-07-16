#include <iostream>

using namespace std;

int main(){

     // Deklarasi array dua dimensi
     // Dengan jumlah elemen baris = 3
     // dan jumlah elemen kolom = 2
     int matrika [3][2];
     int matrikb [3][2] = {{1,2},{3,4},{5,6}};
     int matrikc [3][2];

     // Mendeklarasi variabel untuk
     // Indeks perulangan
     int i,j;

     cout<<"\t===============================";
     cout<<"\n\t= Penjumlahan Matrik Ordo 3x2 =\n";
     cout<<"\t===============================\n\n";

     // Mengisi nilai kedalam
     // Elemen-elemen array matrika
     // Sedangkan elemen-elemen array matrikb
     // Sudah diisi saat deklarasi (inisialisasi)
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<"matrik a ["<<i<<"] ["<<j<<"] = ";
               cin>>matrika[i][j];
          }
     }

     cout<<endl;

     // Melakukan penjumlahan array matrika dan matrikb
     // Dan menyimpan hasilnya ke array matrikc;
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               matrikc[i][j]=matrika[i][j] + matrikb[i][j];
          }
     }

     // Menampilkan matrika
     cout<<"\nMatrik a\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrika[i][j]<<" ";
          }
          cout<<endl;
     }

     // Menampilkan matrikb
     cout<<"\nMatrik b\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikb[i][j]<<" ";
          }
          cout<<endl;
     }

     // Menampilkan hasil penjumlahan / matrikc
     // (dalam bentuk matrik dengan ordo 3x2)
     cout<<"\nMatrik c atau hasil\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikc[i][j]<<" ";
          }
          cout<<endl;
     }

     return 0;
}
