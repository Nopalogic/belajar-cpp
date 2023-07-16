/*  
  ==PROGRAM CIRCULAR SINGLY LINKED LIST==
  ==========BY : Struktur Data dan Algoritma==========
  ======================================= */
  
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node
{
  char Isi;
  simpul kanan;
  simpul kiri;
};
//======================
//==Prototype Function==
//======================
void Sisip_Depan(simpul &CDL, char elemen);
void Sisip_Belakang(simpul &CDL, char elemen);
void Sisip_Tengah(simpul &CDL, char elemen1, char elemen2);
void Hapus_Depan(simpul &CDL);
void Hapus_Belakang(simpul &CDL);
void Hapus_Tengah(simpul &CDL, char elemen);
void Cetak(simpul CDL);

//=================
//==Function Main==
//=================
main()
{
  char huruf, huruf2;
  simpul CDL = NULL;  //Pastikan bahwa DL kosong
  int i;
  cout<<"\t\t==OPERASI PADA CIRCULAR SINGLE LINKED LIST==\n\n";
  //===============
  //==Sisip Depan==
  //===============
  cout<<"Penyisipan Simpul Di Depan\n\n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan Huruf :"; cin>>huruf;
    Sisip_Depan(CDL, huruf);
  }
  Cetak(CDL);
  //==================
  //==Sisip Belakang==
  //==================
  cout<<"\nPenyisipan Simpul Di Belakang \n\n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan Huruf :"; cin>>huruf;
    Sisip_Belakang(CDL, huruf);
  }
  Cetak(CDL);
  //========================================
  //==Sisip Simpul Setelah Simpul Tertentu==
  //========================================
  cout<<"\nMasukkan Huruf     :"; cin>>huruf;
  cout<<"Disisip Setelah Huruf :"; cin>>huruf2;
  cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
  Sisip_Tengah(CDL, huruf, huruf2);
  Cetak(CDL);
  //=========================
  //==Hapus Simpul Belakang==
  //=========================
  cout<<"\nSetelah Hapus Simpul Belakang \n";
  Hapus_Belakang(CDL);
  Cetak(CDL);
  //=======================
  //==Hapus Simpul TENGAH==
  //=======================
  cout<<"\nMasukkan Huruf Tengah Yang Akan Dihapus :"; cin>>huruf;
  Hapus_Tengah(CDL,huruf);
  Cetak(CDL);
  getch;
}

//**********************************
//**FUNCTION SISIP SIMPUL DI DEPAN**
//**********************************
void Sisip_Depan(simpul &CDL, char elemen)
{
  simpul	 baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  baru->kiri = baru;	
  if(CDL == NULL) CDL=baru;
  else
  {
    baru->kanan = CDL;
    baru->kiri = CDL->kiri;
    CDL->kiri->kanan = baru;
    CDL->kiri = baru;
  }
}

//*************************************************
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU**
//*************************************************
void Sisip_Tengah(simpul &CDL, char elemen1, char elemen2)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen1;
  baru->kanan = baru;
  if(CDL == NULL)
    cout<<"List Kosong .............."<<endl;
  else
  {
    bantu = CDL;
    while(bantu->Isi != elemen2) bantu=bantu->kanan;
    baru->kanan = bantu->kanan;
    bantu->kanan = baru;
  }
}

//*************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG**
//*************************************
void Sisip_Belakang(simpul &CDL, char elemen)
{
  simpul baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  if(CDL == NULL)
    CDL=baru;
  else
  {
    baru->kanan = CDL;
    baru->kiri = CDL->kiri;
    CDL->kiri->kanan = baru;
    CDL->kiri = baru;
  }
}

//*************************************
//**FUNCTION MENCETAK ISI LINKED LIST**
//*************************************
void Cetak(simpul CDL)
{
  simpul bantu;
  if(CDL==NULL)
    cout<<"Linked List Kosong ........"<<endl;
  else
  {
    bantu = CDL;
    cout<<"Isi Linked List : ";
    while (bantu->kanan != CDL)
    {
      cout<<bantu->Isi<<"-->";
      bantu=bantu->kanan;
    }
    cout<<bantu->Isi;
  }
}

//*******************************
//**FUNCTION HAPUS SIMPUL DEPAN**
//*******************************
void Hapus_Depan(simpul &CDL)
{
  simpul bantu, Hapus;
  if(CDL == NULL)
    cout<<"Linked List Kosong ..............";
  else
  {
    bantu = CDL;
    while(bantu->kanan != CDL) bantu=bantu->kanan;
    Hapus = CDL;
    CDL = CDL->kanan;
    bantu->kanan = CDL;
    Hapus->kanan = Hapus;
    free(Hapus);
  }
}

//**********************************
//**FUNCTION HAPUS SIMPUL BELAKANG**
//**********************************
void Hapus_Belakang(simpul &CDL)
{
  simpul hapus, bantu;
  if(CDL==NULL)
    cout<<"Linked List Kosong ...............";
  else
  {
    bantu = CDL;
    while(bantu->kanan->kanan != CDL) bantu=bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan = CDL;
    hapus->kanan = hapus;
    free(hapus);
  }
}

//***********************************
//**FUNCTION HAPUS SIMPUL DI TENGAH**
//***********************************
void Hapus_Tengah(simpul &CDL, char elemen)
{
  simpul hapus, bantu;
  if(CDL == NULL)
    cout<<"Linked List Kosong ..............";
  else
  {
    bantu = CDL;
    while(bantu->kanan->Isi != elemen) bantu=bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan = hapus->kanan;
    hapus->kanan = hapus;
    free(hapus);
  }
}
//====================eof====================i