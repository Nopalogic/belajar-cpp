/*  ===========================================
  ==PROGRAM QUEUE DENGAN SINGLE LINKED LIST==
  ============BY : LAMHOT SITORUS============
  ==============Queue_List.cpp=============== */
  
#include<iostream>

using namespace std;
typedef struct node *simpul;
struct node
{
  char Isi;
  simpul next;
};
//======================
//==Prototype Function==
//======================
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);

//==================
//==Function Matin==
//==================
main()
{
  char huruf;
  simpul L = NULL;  //Patikan bahwa L kosong
  int i;
  cout<<"==OPERASI PADA SINGLE LINKED LIST=="<<endl<<endl;
  //=================
  //==Sisi Belakang==
  //=================
  cout<<"\nPenyisipan Simpul \n\n";
  for(i=1;i<=3;i++)
  {
    cout<<"Masukkan Huruf  :";
    cin>>huruf;
    Sisip_Belaakng(L, huruf);
  }
  Cetak(L);
  //======================
  //==Hapus Simpul Depan==
  //======================
  cout<<"\nSetelah Hapus Simpul "<<endl;
  Hapus_Depan(L);
  Cetak(L);
  cout<<"\nSetelah Hapus Simpul "<<endl;
  Hapus_Depan(L);
  Cetak(L);
  cout<<"\nSetelah Hapus Simpul "<<endl;
  Hapus_Depan(L);
  Cetak(L);
  cout<<"\nPenyisipan Simpul \n\n";
  for(i=1;i<=3;i++)
  {
    cout<<"Masukkan Huruf : ";
    cin>>huruf;
    Sisip_Belakang(L, huruf);
  }
  Cetak(L);
  cout<<"\nSetelah Hapus Simpu "<<endl;
  Hapus_Depan(L);
  Cetak(L);
  cout<<"\nSetelah Hapus Simpul "<<endl;
  Hapus_Depan(L);
  {
    Hapus = L;
    L = L->next;
    Hapus->next = NULL;
    free(Hapus);
  }
  
}  //====================eof====================
