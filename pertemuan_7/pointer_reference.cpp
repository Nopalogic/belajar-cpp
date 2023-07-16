#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int ilham, rafli, *raka;;
	ilham = 75;
	raka = &ilham;
	rafli = *raka;
	
	cout << "Nilai Ilham adalah = " << ilham << endl;
	cout << "Nilai Raka adalah = " << raka << endl;
	cout << "Nilai Rafli adalah = " << rafli << endl;
	
	getch();
}