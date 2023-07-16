#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int matrix[100][100];
	int baris, kolom, i, j;
	
	cout<<"Masukkan jumlah baris: ";
	cin >> baris;
	
	cout<<"Masukkan jumlah kolom: ";
	cin >> kolom;
	
	cout<< endl;
	
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<"Baris "<<i+1<<", kolom "<<j+1<<" = ";
			cin >> matrix[i][j];
		}
		cout<<endl;
	}
	
	cout<< "hasil matrix"<<endl;
	
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			cout<<setw(3)<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}