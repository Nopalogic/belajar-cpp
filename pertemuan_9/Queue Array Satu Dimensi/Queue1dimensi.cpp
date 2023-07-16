#include <iostream>
#define MAX 10
using namespace std;

struct queue {
    int depan;
    int belakang;
    string data[MAX];
}Antrian;

void init(){
    Antrian.depan = Antrian.belakang = 0;
}

bool isFull(){
    return Antrian.belakang == MAX;
}

bool isEmpty (){
    return Antrian.belakang == 0;
}

void printQueue (){
    if(isEmpty()) {
        cout << "Antrian kosong" <<endl;
    }else{
        cout << "Antrian : "<<endl;
        for (int i = Antrian.depan; i < Antrian.belakang; i++){
        
        //menambahkan koma jika data tidak terdapat di antrian pertama
            cout << Antrian.data[i];
            cout << endl;
        }
    }
}


void enqueue () {
    if(isEmpty()){
        init();
    }
    
    if (isFull()){
        cout << "Antrian penuh !" <<endl;
    }
    else{
        string data;
        cout << "Masukkan nama : ";
        cin >> data;
        Antrian.data[Antrian.belakang]= data;
        Antrian.belakang++;
        cout << "Nama masuk ke antrian " <<endl;
        printQueue();
    }
}

void dequeue() {
    if (isEmpty()){
        cout << "Antrian kosong" <<endl;
    }else{
        cout << "Mengeluarkan antrian \n" << Antrian.data[Antrian.depan] <<endl;
        
        for (int i = Antrian.depan; i < Antrian.belakang; i++){
            Antrian.data[i] = Antrian.data [i + 1];
        }
        Antrian.belakang--;
        printQueue();
    }
}

void clear () {
    Antrian.depan = Antrian.belakang = 0;
    cout<<"Antrian sudah kosong"<<endl;
}

int main(){
    int pilihan;
    do
    {
        cout<<"---------------------\n"
            <<"    Menu Pilihan\n"
            <<"---------------------\n"
            <<"1. Masukkan Antrian \n"
            <<"2. Hapus Antrian \n"
            <<"3. Bersihkan Antrian \n"
            <<"4. Keluar \n"
            <<"---------------------\n"
            <<"Masukkan Pilihan (1-4) : "; cin >> pilihan;
        switch (pilihan)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                clear();
                break;
            case 4:
                cout<<"Exit program";
                break;
            default:
                cout <<"Pilihan tidak tersedia";
                break;
        }
    }while(pilihan != 4);
return 0;
}
