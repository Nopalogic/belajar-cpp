#include <iostream>
#include <string>

using namespace std;

struct Lubang {
    int nomor;
    int biji;
    Lubang* next;
};

struct Pemain {
    string nama;
    Lubang* lubang;
};

Pemain pemain_1;
Pemain pemain_2;
int lubang;

void input();
void sett();
void jalan(Pemain* p, Lubang* lubang_terpilih);
void pemain(Pemain* p);
int pilih_ulang();
void awal();
int menu();
void aturan();

void input() {
    cout << "Silahkan masukkan antara 3 atau 4 atau 5 atau 6 atau 7\n";
    cout << "Anda ingin bermain menggunakan berapa lubang: ";
    cin >> lubang;
    if (lubang < 3 || lubang > 7) {
        input();
    }
    else {
        cout << "Nama pemain 1: ";
        cin >> pemain_1.nama;
        cout << "Nama pemain 2: ";
        cin >> pemain_2.nama;
    }
}

void sett() {
    int i;
    Lubang* prevLubang = NULL;
    for (i = 0; i < lubang; i++) {
        Lubang* newLubang = new Lubang;
        newLubang->nomor = i + 1;
        newLubang->biji = 7;
        newLubang->next = NULL;

        if (prevLubang == NULL) {
            pemain_1.lubang = newLubang;
        }
        else {
            prevLubang->next = newLubang;
        }

        prevLubang = newLubang;
    }

    pemain_2.lubang = pemain_1.lubang->next;
    pemain_1.lubang->next = pemain_2.lubang;
}

void jalan(Pemain* p, Lubang* lubang_terpilih) {
    int biji = lubang_terpilih->biji;
    lubang_terpilih->biji = 0;
    Lubang* currentLubang = lubang_terpilih;

    while (biji > 0) {
        currentLubang = currentLubang->next;
        currentLubang->biji++;
        biji--;
    }

    pemain(p);
}

void pemain(Pemain* p) {
    cout << "Giliran " << p->nama << endl;
    cout << p->nama << ":\t";
    Lubang* tempLubang = p->lubang;
    do {
        cout << tempLubang->biji << " ";
        tempLubang = tempLubang->next;
    } while (tempLubang != p->lubang);
    cout << endl;

    cout << (p == &pemain_1 ? pemain_2.nama : pemain_1.nama) << ":\t";
    tempLubang = (p == &pemain_1) ? pemain_2.lubang : pemain_1.lubang;
    do {
        cout << tempLubang->biji << " ";
        tempLubang = tempLubang->next;
    } while (tempLubang != p->lubang);
    cout << endl;

    cout << "Silahkan pilih lubang (1-" << lubang << "): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan < 1 || pilihan > lubang || p->lubang[pilihan - 1].biji == 0) {
        cout << "Pilihan lubang tidak valid, silahkan ulangi" << endl;
        pemain(p);
    }
    else {
        Lubang* lubang_terpilih = p->lubang;
        for (int i = 0; i < pilihan - 1; i++) {
            lubang_terpilih = lubang_terpilih->next;
        }
        jalan(p, lubang_terpilih);
    }
}

int pilih_ulang() {
    int pil;
    cout << "Apakah ingin bermain lagi? (1. Ya / 2. Tidak): ";
    cin >> pil;
    if (pil == 1) {
        system("cls");
        return 1;
    }
    else if (pil == 2) {
        cout << "Terima kasih telah bermain!" << endl;
        return 0;
    }
    else {
        cout << "Pilihan tidak valid, silahkan ulangi" << endl;
        return pilih_ulang();
    }
}

void awal() {
    system("cls");
    cout << "\t\t\t\tSELAMAT DATANG DI PERMAINAN DAKON" << endl;
    cout << "--------------------------------------------------------------------" << endl;
}

int menu() {
    int pil;
    awal();
    cout << "\t\t\t     1. Mulai Permainan" << endl;
    cout << "\t\t\t     2. Aturan Permainan" << endl;
    cout << "\t\t\t     3. Keluar" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Pilihan Anda: ";
    cin >> pil;

    switch (pil) {
    case 1:
        system("cls");
        cout << "\t\t\t\tPERMAINAN DAKON" << endl;
        cout << "--------------------------------------------------------------------" << endl;
        input();
        sett();
        pemain(&pemain_1);
        break;
    case 2:
        system("cls");
        cout << "\t\t\t\tATURAN PERMAINAN DAKON" << endl;
        cout << "--------------------------------------------------------------------" << endl;
        aturan();
        break;
    case 3:
        return 0;
    default:
        cout << "Pilihan tidak valid, silahkan ulangi" << endl;
        break;
    }
    return pilih_ulang();
}

void aturan() {
    cout << "Dakon adalah permainan tradisional yang dimainkan dengan sebuah papan dan biji-bijian." << endl;
    cout << "Setiap pemain memiliki lubang di depannya yang digunakan untuk menampung biji-bijian." << endl;
    cout << "Tujuan dari permainan ini adalah untuk mengumpulkan biji-bijian sebanyak mungkin di lubang-lubang miliknya." << endl;
    cout << "Permainan berakhir jika salah satu pemain tidak memiliki biji-bijian di lubangnya atau jika semua biji-bijian telah terkumpul di lubang pemain tersebut." << endl;
    cout << "Pemain yang memiliki jumlah biji-bijian terbanyak di lubang besar (lubang di sebelah kanan) akan menjadi pemenang." << endl;
    cout << "Selamat bermain!" << endl;
}

int main() {
    int ulang;
    do {
        ulang = menu();
    } while (ulang);

    return 0;
}
