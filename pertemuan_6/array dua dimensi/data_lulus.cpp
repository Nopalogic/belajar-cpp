#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (){
	int datalulus [3][2];
	int i, j, total;
	system ("cls");
	
	total = 0;
	
	datalulus [0][0]=20;
	datalulus [0][1]=60;
	datalulus [1][0]=80;
	datalulus [1][1]=75;
	datalulus [2][0]=83;
	datalulus [2][1]=100;
	
	cout <<"Tampilan Data Lulus " << endl; cout << endl;
	cout <<"Teknik Informatika	Teknik Elektro" << endl;
		for (i = 0; i <=2 ; i++){
			for (j=0;  j<=1; j++){
				cout <<setw (5)<<datalulus[i][j];
				total = total+datalulus[i][j];
			}
			cout << endl;
		}cout << endl;
		cout <<" Jumlah Lulus = " <<total<<endl;
		cout <<" Rata-rata kelulusan = " << total / (i*j) << endl;
}
