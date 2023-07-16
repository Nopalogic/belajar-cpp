#include <iostream>
using namespace std;

int main(){
	int jam_kerja,jumlah_hari_kerja, jam_mulai_kerja, jam_akhir_kerja;
    
    cout << "Masukkan jam kerja dimulai: ";
    cin >> jam_mulai_kerja;
    cout << "Masukkan jam kerja berakhir: ";
    cin >> jam_akhir_kerja;

	int total_jam = jam_akhir_kerja - jam_mulai_kerja;
    cout << "Total jam pelayanan dalam sehari: " << total_jam << " jam" << endl;
    
    cout << "Masukkan jumlah hari kerja: ";
    cin >> jumlah_hari_kerja;

    int total_jam_seminggu = total_jam * jumlah_hari_kerja;

    cout << "Total jam pelayanan dalam seminggu: " << total_jam_seminggu << " jam" << endl;
    

    return 0;	
}