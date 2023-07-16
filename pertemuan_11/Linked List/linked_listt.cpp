#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();

struct simpul{
 char nim[8], nama[80];
 int umur;
 struct simpul *next;
}mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;

void clrscr(){
 system("cls");
}

int main(){
 do{
  clrscr();
  cout << "MENU LINKEDLIST" << endl;
  cout << "1. Tambah Depan" << endl;
  cout << "2. Tambah Belakang" << endl;
  cout << "3. Hapus Depan" << endl;
  cout << "4. Hapus Belakang" << endl;
  cout << "5. Tampil" << endl;
  cout << "6. Selesai" << endl;
  cout << "Pilihan anda: ";
  cin>>pil;
  pilih();
 }while (pil!=6);
 return 0;
}

void pilih(){
 if(pil==1){
  tambah_depan();
 }
 else if(pil==2){
  tambah_belakang();
 }
 else if(pil==3){
  hapus_depan();
 }
 else if(pil==4){
  hapus_belakang();
 }
 else if(pil==5){
  tampil();
 }
}

void buat_baru(){
 baru=(simpul*)malloc(sizeof(struct simpul));
 cout << "Input NIM : ";
 cin >> baru->nim;
 cout << "Input Nama : ";
 cin >>baru->nama;
 cout << "Input Umur : ";
 cin >> baru->umur;
 baru->next=NULL;
}

void tambah_belakang(){
 buat_baru();
 if(awal==NULL){
  awal=baru;
 }
 else{ 
  akhir->next=baru;
 }
 akhir=baru;
 akhir->next=NULL;
 cout << endl << endl;
 tampil();
}

void tambah_depan(){
 buat_baru();
 if(awal==NULL){
  awal=baru;
  akhir=baru;
  akhir->next=NULL;
 }
 else{
  baru->next=awal;
  awal=baru;
 }
 cout << endl << endl;
 tampil();
}

void hapus_depan(){
 if(awal==NULL){
  cout<<"kosong";
 }
 else{
  hapus = awal;
  awal=awal->next;
  free(hapus);
 }
 cout << endl << endl;
 tampil();
}

void hapus_belakang(){
 if(awal==NULL){
  cout<<"kosong";
 }
 else{
  hapus = awal;
  awal=awal->next;
  free(hapus);
 }
 cout << endl << endl;
 tampil();
}


void tampil(){
 if(awal==NULL){
  cout << "Kosong";
 }
 else{
  bantu=awal;
  while(bantu!=NULL){
   cout << "NIM : " << bantu->nim << endl;
   cout << "NAMA : " << bantu->nama << endl;
   cout << "UMUR : " << bantu->umur << endl;

   bantu=bantu->next;
  }
 }
 getch();
}
