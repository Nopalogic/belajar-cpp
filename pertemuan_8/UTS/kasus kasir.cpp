#include <iostream>
using namespace std;

int main (){
	
	char nama[30], pembeli[30];
	int harga, jumlah, total, jmltotal, jmlbayar, kembalian, diskon;
	string input, kode;
	
	cout << "		BEYEGE STORE	" <<endl;
	cout << "========================" <<endl;
	cout << "Nama Pembeli : ";
	cin >> pembeli;
	cout << "Pilihan Produk yang tersedia" << endl;
	cout << "HP01 - Laptop HP 4 GB - Rp. 5.500.000" << endl;	
	cout << "HP02 - Laptop HP 8 GB - Rp. 10.250.000" << endl;
	cout << "HD01 - Hardisk Toshiba 1 Tera - Rp. 890.000" << endl;
	cout << "FD01 - Flashdisk Toshiba 8 GB - Rp. 87.000" << endl;
	cout << "PR01 - Printer HP Tipe CH9DHGT	- Rp. 1.700.000" << endl;
	cout << "MS01 - Mouse Logitech Tipe RJ - Rp. 125.000" << endl;
	
	cout << endl;
	cout << endl;
	
	cout << "Barang yang dipilih : ";
	cin >> kode;
	cout << "Jumlah Beli : ";
	cin >> jumlah;
	
	if (kode == "HP01"){
		cout << "Laptop HP Ram 4 GB";
		harga = 5500000;
	}else if (kode == "HP02"){
		cout << "Laptop HP Ram 8 GB";
		harga = 10250000;
	}else if (kode == "HD01"){
		cout << "Hardisk Toshiba 1 Tera";
		harga = 890000;
	}else if (kode == "FD01"){
		cout << "Flashdisk Toshiba 8 GB";
		harga = 87000;
	}else if (kode == "PR01"){
	cout << "Printer HP Tipe CH9DHGT";
	harga = 1700000;
	}else if (kode == "MS01"){
	cout << "Mouse Logitech Tipe RJ";
	harga = 125000;
	}else{
		cout <<"Barang yang dipilih tidak tersedia";
	}
	cout << endl;
	cout << "======================================" <<endl;
	cout << " Struk Pembayaran " <<endl; 
	cout << "======================================" <<endl;
	cout << "Nama Pembeli 	: " <<pembeli<<endl;
	cout << "Harga 		: " <<harga<<endl;
	cout << "Jumlah 		: " <<jumlah<<endl;
	
	total = harga * jumlah;
	
	cout << "Total		: " <<total<<endl;
	
	cout << endl;
	if (total == 5000000 || total < 5500000){
		diskon = 0.05 * total;
	}else if (total > 9000000){
		diskon = 0.10 * total;
	}else {
		diskon = 0;
	}
	cout << "Diskon		: " <<diskon<<endl;
	cout << "================================" << endl;
	
	jmltotal = total - diskon;
	cout << "Total Keseluruhan : " <<jmltotal<<endl;
	cout << "Uang Bayar		: ";
	cin >> jmlbayar;
	
	kembalian = jmlbayar - jmltotal;
	cout << "Uang Kembalian : " <<kembalian <<endl;
	cout << "=================" <<endl;
}
