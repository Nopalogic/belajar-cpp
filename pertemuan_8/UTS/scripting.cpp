#include <iostream>
using namespace std;

int main () {
	int jmlkelas;
	int jmlkonten;
	
	cout << "Jumlah Kelas : ";
	cin >> jmlkelas;
	cout<< "Jumlah Soal : ";
	cin>>jmlkonten;
	
	string soal [jmlkonten][jmlkelas];
	cin.ignore(1, '\n');
	
	for (int a = 0 ; a < jmlkelas ; a++){
		cout << "Masukkan Soal Kelas " << a+1 << endl;
		for (int c = 0 ; c < jmlkonten; c++){
			cout << "Masukkan soal ke " << c+1<<":";
			getline (cin, soal [a][c]);
		}		
	}
	cout << endl;
	cout << endl;
	cout << "Soal yang telah diinputkan : " <<endl;
	for (int b = 0; b < jmlkelas; b++){
		cout << "Soal Kelas "<< b+1 << endl;		
		for (int d =0 ; d < jmlkonten; d++){
			cout << soal [b][d]<<endl;
		}
		cout << endl;
	}
	
	return 0;
}
