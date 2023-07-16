/*  
  ==PROGRAM CIRCULAR SINGLY LINKED LIST==
  ==========BY : Struktur Data dan Algoritma==========
  ======================================= */
  
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node *simpul;
struct node
{
  char Isi;
  simpul kanan;
};
//======================
//==Prototype Function==
//======================
void Sisip_Depan(simpul &CL, char elemen);
void Sisip_Belakang(simpul &CL, char elemen);
void Sisip_Tengah(simpul &&CL, char elemen1, char elemen2);
void Hapus_Depan(simpul &CL);
void Hapus_Belakang(simpul &CL);
void Hapus_Tengah(simpul &CL, char elemen);
void Cetak(simpul CL);

//=================
//==Function Main==
//=================
main()
{
  char huruf, huruf2;
  simpul CL = NULL;  //Pastikan bahwa DL kosong
  int i;
  cout<<"\t\t==OPERASI PADA CIRCULAR SINGLE LINKED LIST==\n\n";
  //===============
  //==Sisip Depan==
  //===============
  cout<<"Penyisipan Simpul Di Depan\n\n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan Huruf :"; cin>>huruf;
    Sisip_Depan(CL, huruf);
  }
  Cetak(CL);
  //==================
  //==Sisip Belakang==
  //==================
  cout<<"\nPenyisipan Simpul Di Belakang \n\n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan Huruf :"; cin>>huruf;
    Sisip_Belakang(CL, huruf);
  }
  cetak(CL);
  //========================================
  //==Sisip Simpul Setelah Simpul Tertentu==
  //========================================
  cout<<"\nMasukkan Huruf     :"; cin>>huruf;
  cout<<"Disisip Setelah Huruf :"; cin>>huruf2;
  cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
  Sisip_Tengah(CL, huruf, huruf2);
  Cetak(CL);
  //=========================
  //==Hapus Simpul Belakang==
  //=========================
  cout<<"\nSetelah Hapus Simpul Belakang \n";
  Hapus_Belakang(CL);
  Cetak(CL);
  //=======================
  //==Hapus Simpul TENGAH==
  //=======================
  cout<<"\nMasukkan Huruf Tengah Yang Akan Dihapus :"; cin>>huruf;
  Hapus_Tengah(CL,huruf);
  Cetak(CL);
  getch;
}

//**********************************
//**FUNCTION SISIP SIMPUL DI DEPAN**
//**********************************
void Sisip_Depan(simpul &CL, char elemen)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  if(CL == NULL)
    CL=baru;
  else
  {
    bantu = CL;
    while(bantu->kanan != CL) bantu=bantu->kanan;
    baru->kanan = CL;
    bantu->kanan = baru;
    CL = baru;
  }
}

//*************************************************
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU**
//*************************************************
void Sisip_Tengah(simpul &CL, char elemen1, char elemen2)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen1;
  baru->kanan = baru;
  if(CL == NULL)
    cout<<"List Kosong .............."<<endl;
  else
  {
    bantu = CL;
    while(bantu->Isi != elemen2) bantu=bantu->kanan;
    baru->kanan = bantu->kanan;
    bantu->kanan = baru;
  }
}

//*************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG**
//*************************************
void Sisip_Belakang(simpul &CL, char elemen)
{
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  if(CL == NULL)
    CL=baru;
  else
  {
    bantu = CL;
    while(bantu-> != CL) bantu=bantu->kanan;
    baru->kanan = CL;
    bantu->kanan = baru;
  }
}

//*************************************
//**FUNCTION MENCETAK ISI LINKED LIST**
//*************************************
void Cetak(simpul CL)
{
  simpul bantu;
  if(CL==NULL)
    cout<<"Linked List Kosong ........"<<endl;
  else
  {
    bantu = CL;
    cout<<"Isi Linked List : ";
    while (bantu->kanan != CL)
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
void Hapus_Depan(simpul &CL)
{
  simpul bantu, Hapus;
  if(CL == NULL)
    cout<<"Linked List Kosong ..............";
  else
  {
    bantu = CL;
    while(bantu->kanan != CL) bantu=bantu->kanan;
    Hapus = CL;
    CL = CL->kanan;
    bantu->kanan = CL;
    Hapus->kanan = Hapus;
    free(Hapus);
  }
}

//**********************************
//**FUNCTION HAPUS SIMPUL BELAKANG**
//**********************************
void Hapus_Belakang(simpul &CL)
{
  simpul hapus, bantu;
  if(CL==NULL)
    cout<<"Linked List Kosong ...............";
  else
  {
    bantu = CL;
    while(bantu->kanan->kanan != CL) bantu=bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan = CL;
    hapus->kanan = hapus;
    free(hapus);
  }
}

//***********************************
//**FUNCTION HAPUS SIMPUL DI TENGAH**
//***********************************
void Hapus_Tengah(simpul &CL, char elemen)
{
  simpul hapus, bantu;
  if(CL == NULL)
    cout<<"Linked List Kosong ..............";
  else
  {
    bantu = CL;
    while(bantu->kanan->Isi != elemen) bantu=bantu->kanan;
    hapus = bantu->kanan;
    bantu->kanan = hapus->kanan;
    hapus->kanan = hapus;
    free(hapus);
  }
}
//====================eof====================
