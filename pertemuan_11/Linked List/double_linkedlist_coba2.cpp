/*  =====================================================
  ============ PROGRAM DOUBLE LINKED LIST =============
  ===== Sisip Depan, Hapus Tengah, Hapus Belakang =====
  ================ Tanpa Pointer Bantu ================
  ================ BY : Bias Yulisa Geni, S.Kom., M.Kom ================
  ==================Struktur Data=================================== */
  
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0

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
void Sisip_Depan(simpul &DL, char elemen);
void Hapus_Belakang(simpul &DL);
void Hapus_Tengah(simpul &DL, char elemen);
void Cetak(simpul DL);

//=================
//==Function Main==
//=================
main()
{
  char huruf;
  simpul DL = NULL;  //Pastikan bahwa DL kosong
  int i;
  cout<<"\t\t==OPERASI PADA DOUBLE LINKED LIST==\n\n";
  //===============
  //==Sisip Depan==
  //===============
  cout<<"Penyisipan Simpul Di Depan\n\n";
  for(i=1; i<=6; i++)
  {
    cout<<"Masukkan Huruf :";
    cin>>huruf;
    Sisip_Depan(DL,huruf);
  }
  Cetak(DL);
  //=========================
  //==Hapus Simpul Belakang==
  //=========================
  cout<<"\nSetelah Hapus Simpul Belakang \n";
  Hapus_Belakang(DL);
  Cetak(DL);
  cout<<"\nSetelah Hapus Simpul Belakang \n";
  Hapus_Belakang(DL);
  Cetak(DL);
  //=======================
  //==Hapus Simpul TENGAH==
  //=======================
  cout<<"\nMasukkan Huruf Tengah Yang Akan Dihapus  :";
  cin>>huruf;
  Hapus_Tengah(DL,huruf);
  Cetak(DL);
  cout<<"\nMasukkan Huruf Tengah Yang Akan Dihapus  :";
  cin>>huruf;
  Hapus_Tengah(DL,huruf);
  Cetak(DL);
  getch();
}

//**********************************
//**FUNCTION SISIP SIMPUL DI DEPAN**
//**********************************
void Sisip_Depan(simpul &DL, char elemen)
{
  simpul baru;  //simpul baru = new simpul; maka baris berikut dihapus
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = NULL;
  baru->kiri = NULL;
  if(DL == NULL)
    DL=baru;
  else
  {
    baru->kanan = DL;
    DL->kiri = baru;
    DL=baru;
  }
}

//************************************
//**FUNTION MENCETAK ISI LINKED LIST**
//************************************
void Cetak(simpul DL)
{
  if(DL==NULL)
    cout<<"Linked List Kosong ........."<<endl;
  else
  {
    cout<<"Isi Linked List : ";
    while (DL->kanan != NULL)
    {
      cout<<DL->Isi<<"<==>";
      DL=DL->kanan;
    }
    cout<<DL->Isi;
  }
}

//**********************************
//**FUNCTION HAPUS SIMPUL BELAKANG**
//**********************************
void Hapus_Belakang(simpul &DL)
{
  simpul Hapus;
  if(DL==NULL)
    cout<<"Linked List Kosong ............";
  else
  {
    Hapus = DL;
    while(Hapus->kanan != NULL) Hapus=Hapus->kanan;
    Hapus->kiri->kanan = NULL;
    Hapus->kiri = NULL;
    free(Hapus);
  }
}

//***********************************
//**FUNCTION HAPUS SIMPUL DI TENGAH**
//***********************************
void Hapus_Tengah(simpul &DL, char elemen)
{
  simpul Hapus;
  if(DL==NULL)
    cout<<"Linked List Kosong ............";
  else
  {
    Hapus = DL;
    while(Hapus->Isi != elemen) Hapus=Hapus->kanan;
    Hapus->kanan->kiri = Hapus->kiri;
    Hapus->kiri->kanan = Hapus->kanan;
    Hapus->kanan = NULL;
    Hapus->kiri = NULL;
    free(Hapus);
  }
}

//===========================eof===========================
