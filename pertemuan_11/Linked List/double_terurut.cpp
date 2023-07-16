/*  =============================================
  ======== PROGRAM DOUBLE LINKED LIST =========
  ==Membentuk Linked List Yang Selalu Terurut==
  =============BY : LAMHOT SITORUS=============
  ============================================= */
  
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
void Sisip_Urut(simpul &DL, char elemen);
void Cetak(simpul DL);
//======================
main()
{
  char huruf;
  simpul DL = NULL;  //Pastikan bahwa DL kosong
  int i;
  cout<<"\t\t==DOUBLE LINKED LIST SELALU TERURUT==\n\n";
  //================
  //==Sisip Elemen==
  //================
  for(i=1; i<=10; i++)
  {
    cout<<"Masukkan Huruf :";
    cin>>huruf;
    Sisip_Urut(DL, huruf);
    Cetak(DL);
  }
  Cetak(DL);
  getch();
}

//*********************************************
//**FUNCTION PENYISIPAN SIMPUL SECARA TERURUT**
//*********************************************
void Sisip_Urut(simpul &DL, char elemen)
{
  simpul Bantu, Baru;
  bool Ketemu;
  Baru = (simpul) malloc(sizeof(simpul));
  Baru->Isi = elemen;
  Baru->kanan = NULL;
  Baru->kiri = NULL;
  if(DL == NULL)
    DL=Baru;
  else
  {
    if(DL->Isi > elemen)
    {
      Baru->kanan = DL;
      DL->kiri = Baru;
      DL=Baru;
    }
    else
    {
      Bantu = DL;
      Ketemu = false;
      while((Bantu->kanan != NULL) && (!Ketemu))
      {
        if(elemen < Bantu->kanan->Isi)
        {
          Baru->kanan = Bantu->kanan;
          Baru->kiri = Bantu;
          Bantu->kanan->kiri = Baru;
          Bantu->kanan = Baru;
          Ketemu = true;
        }
        Bantu=Bantu->kanan;
      }
      if(!(Ketemu))
        Bantu->kanan = Baru;
    }
  }
}
//*************************************
//**FUNCTION MENCETAK ISI LINKED LIST**
//*************************************
void Cetak(simpul DL)
{
  if(DL==NULL)
    cout<<"Linked List Kosong ........."<<endl;
  else
  {
    cout<<"\nIsi Linked List : ";
    while (DL != NULL)
    {
      cout<<DL->Isi<<" ";
      DL=DL->kanan;
    }
  }
}
//======================oef======================
