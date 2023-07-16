#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct dataKtp {
    char nama[50];
    char alamat[50];
    char golongandarah[2];
    dataKtp *next, *prev;
};
dataKtp *awal=NULL,*akhir=NULL,*bantu,*baru,*hapus;

void inputDatadepan(){
    baru = new dataKtp;
    baru->next = NULL;
    baru->prev = NULL;
    cout << "Nama\t\t: ";
    cin >> baru->nama;
    cout << "Alamat\t\t: ";
    cin >> baru->alamat;
    cout << "Golongan darah  : ";
    cin >> baru->golongandarah;
    if (awal == NULL){
        awal = akhir = baru;
    }
    else {
        baru->next = awal;
        awal->prev = baru;
        awal = baru;
    }
    system ("cls");
}

void inputDatabelakang(){
    baru = new dataKtp;
    baru->next = NULL;
    baru->prev = NULL;
    cout << "Nama\t\t: ";
    cin >> baru->nama;
    cout << "Alamat\t\t: ";
    cin >> baru->alamat;
    cout << "Golongan darah  : ";
    cin >> baru->golongandarah;
    if (awal == NULL){
        awal = akhir = baru;
    }
    else {
        akhir->next = baru;
        baru->prev = akhir;
        akhir = baru;
    }
    system ("cls");
}

void hapusDatadepan(){
    if(awal->next == NULL){
        awal=akhir=NULL;
        cout << "Data sudah kosong";
    }else{
        hapus = awal;
        awal = awal->next;
        awal->prev = NULL;
        delete hapus;
    }
}

void outputData (){
    bantu=awal;
    while (bantu != NULL){
        cout << "Nama\t\t: "<<bantu->nama<<endl;
        cout << "Alamat\t\t: "<<bantu->alamat<<endl;
        cout << "Golongan darah  : "<<bantu->golongandarah<<endl;
        bantu = bantu->next;
    }
}

int main()
{
    int pilihan;
    do {
        cout << "----------DOUBLE LINKED LIST-----------\n";
        cout << "Pilih menu : \n";
        cout << "1. Input data di depan\n";
        cout << "2. Input data di belakang\n";
        cout << "3. Hapus data di depan\n";
        cout << "4. Output data\n";
        cout << "Lain-lain >> EXIT\n";
        cout << "Pilihan : ";
        cin >> pilihan;
        switch (pilihan){
        case 1 :
            inputDatadepan();
            break;
        case 2 :
            inputDatabelakang();
            break;
        case 3 :
            hapusDatadepan();
            break;
        case 4 :
            if (baru == NULL){
                    cout << "Data masih kosong !\n";
            }
            else {
                outputData();
            }
            break;
        default :
            cout << "---------EXIT---------";
            break;
        }
    }while(pilihan <= 4);
    getch();
}
