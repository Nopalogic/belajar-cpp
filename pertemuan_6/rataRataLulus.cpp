#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){
	int datalulus[3][2];
	int i,j,total;
	system("cls");
	
	total = 0;
	
	datalulus[0][0] = 20;
	datalulus[0][1] = 60;
	datalulus[1][0] = 80;
	datalulus[1][1] = 75;
	datalulus[2][0] = 83;
	datalulus[2][1] = 100;
	
	cout << "Tampilkan Data Lulus"<<endl;
	cout << endl;
	cout << "   TI  TE"<< endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout << setw(5) << datalulus[i][j];
			total += datalulus[i][j];
		}
		cout<< endl;
	}
	cout<<endl;
	
	cout<<"Jumlah data lulus = "<<total<<endl;
	cout<<"Rata-rata kelulusan = "<<total / (i*j)<<endl;
	
}