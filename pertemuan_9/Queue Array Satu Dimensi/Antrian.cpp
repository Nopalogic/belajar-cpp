#include <iostream>//header untuk memanggil fungsi cout dan cin 
#include <conio.h> //header untuk memanggil fungsi getch 
#include <stdlib.h> //header untuk memanggil fungsi operasi pembanding dan operasi konversi
#define MAX 1000 //mendefinisikan variable maks sebagai 1000
//sumber : https://github.com/ismynr/Source-Code-Cpp/blob/master/Program_Queue.cpp
using namespace std;//deklarasi namespace std untuk menggunakan semua fungsi yang ada di dalam class atau file pada namespace std 

int nomer[MAX];//deklarasi array nomor dengan tipedata integer dengan panjang elemen bernilai 100
int head=-1, tail=-1;//assign variabel integer head dengan value -1 , tail = -1

bool IsEmpty(){ // membuat fungsi IsEmpty() dengan return type boolean 
   if(tail == -1){// klausa if dengan kondisi tail = -1
       return true;// jika benar maka mengembalikan boolean true
   }else{ 
       return false;//jika tail tidak sama dengan -1 maka mengembalikan boolean false
   }
}
bool IsFull(){  // membuat fungsi IsFull() dengan return type boolean 
   if(tail == MAX-1){// klausa if dengan kondisi tail = MAX-1
       return true;//jika benar maka mengembalikan boolean true
   }else{
       return false;//jika benar maka mengembalikan boolean false
   }
}
void AntrianMasuk(int no){// membuat procedure AntrianMasuk() dengan parameeter no type integer 
    if (IsEmpty()){//memanggil fungsi IsEmpty() di dalam kondisi if jika true maka
        head=tail=0;//assign variabel head = 0 ,tail = 0
    }else {//jika false maka
        tail++;//post-increment variabel tail
    }
    nomer[tail]=no;//assign array nomor dengan index value dari variabel tail dengan nilai dari parameter (variabel no)
}
void AntrianKeluar(){//membuat procedure AntrianKeluar()
    if(IsEmpty()){ //memanggil fungsi IsEmpty() di dalam kondisi if jika true maka
        cout<<"Antrian sudah kosong ! "; //mencetak di layar output program Antrian sudah kosong !
        getch();//memanggil fungsi get character yang digunakan untuk membaca input dari keyboard (menjeda proses yg berlangsung /press any key)
    } else {//jika false maka
        for(int a=head;a<tail;a++){//perulangan for dengan kondisi a kurang dari tail
            nomer[a]=nomer[a+1];//assign array nomor dengan index value dari variabel a dengan nilai darirray nomor dengan index = (a+1)
        }
        tail--;//post-decrement variabel tail
        if(tail == -1){//if dengan kondisi tail = -1 maka
            head = -1; //assign variabel head dengan nilai -1
        }
    }
}
void Clear(){//membuat procedure Clear()
     head=tail=-1;//assign variabel head dan tail dengan nilai -1
}
void View(){//membuat procedure View()
     if(IsEmpty()){//memanggil fungsi IsEmpty() di dalam kondisi if jika true maka
         cout<<"Antrian kosong ! "; //mencetak di layar output program Antrian sudah kosong !

     }else {//jika false maka
         system("cls");//membersihkan layar output program 
         for(int a=head;a<=tail;a++){//perulangan for dengan kondisi a kurang dari tail
         /*mencetak di layar output program 
		 ===============================
 		  >> No. Antri : value dari array nomor index ke a
		 ===============================
		 endl = newline
		 */
              cout << "===============================" 
                   << "\n >> No. Antri : [" << nomer[a] << "]"
                   << "\n==============================="<< endl;
         }
     }
}

int main(){//fungsi utama dari sebuah kode bahasa C
    system("color 37");//fungsi untuk memberikan warna pada text dan background c++
    int choose, p=1, urut;//deklarasi variabel choose,urut ,assign variabel p dengan nilai 1
    do{// membuat perulangan do while sampai choose bernilai 5
        system("cls");//membersihkan layar output program 
        /*mencetak di layar output program
        ===== PROGRAM ANTRIAN C++ =====
		===============================
		|1. Tambah Antrian            |
		|2. Panggil Antrian           |
		|3. Lihat daftar antrian      |
		|4. Kosongkan antrian         |
		|5. Exit                      |
		===============================
		Choose !
		\n = newline
		*/
        cout << "\n\n===== PROGRAM ANTRIAN C++ ====="
             << "\n==============================="
             << "\n|1. Tambah Antrian            |"
             << "\n|2. Panggil Antrian           |"
             << "\n|3. Lihat daftar antrian      |"
             << "\n|4. Kosongkan antrian         |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nChoose ! "; cin >> choose; //keyword cin untuk membaca inputan pada keyboard
        cout << "\n\n";
        if(choose == 1){//jika user memasukan nilai 1 
            if(IsFull()) {//memanggil fungsi IsFull() di dalam kondisi if jika true maka
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";//mencetak di layar output program Antrian sudah penuh, mohon tunggu beberapa saat lagi
            }
            else{//jika false
                urut=p; //assign variabel urut = p
                AntrianMasuk(urut);//memanggil procedure AntrianMasuk dengan memberikan nilai parameternya = variabel urut
                /*mencetak di layar output program
                ---------------------------------
				|          NO. ANTRIAN          |
				|       value variabel p        ||
				---------------------------------
				|       Silahkan Mengantri      |
				|  Menunggu value variabel tail  Antrian      ||
				---------------------------------
				endl = newline
				*/
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;//post increment variabel p
            }
        }
        else if(choose == 2){//jika user memasukan nilai 2
        	/*mencetak di layar output program
			=================================
			No. Antri : value array nomor dengan index = head
			=================================
			Silahkan Dipanggil !
			*/
            cout << "=================================" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << "\n=================================" << endl;
            AntrianKeluar(); //memanggil procedure AntrianKeluar()
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(choose == 3){//jika user memasukan nilai 3
            View(); //memanggil procedure View()
        }
        else if(choose == 4){//jika user memasukan nilai 4
            Clear();//memanggil procedure Clear()
            cout<<"Antrian dikosongkan ! ";//mencetak di layar output program Antrian dikosongkan ! 
        }
        else if(choose == 5){ //jika user memasukan nilai 5 
        }
        else{//jika user memasukan nilai bukan dari 1,2,3,4,5 maka
            cout << "Masukan anda salah ! \n"<< endl;//mencetak di layar output program Masukan anda salah !  
        }
        getch();//memanggil fungsi get character yang digunakan untuk membaca input dari keyboard (menjeda proses yg berlangsung /press any key)
    }while(choose!=5);//kondisi do while terpenuhi dan berhenti jika variabel choose = 5
}
