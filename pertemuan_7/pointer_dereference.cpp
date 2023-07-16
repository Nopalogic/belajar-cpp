#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int ilham, amir, *raka;;
	ilham = 75;
	raka = &ilham; /* Nilai variable raka merupakan alamat memori dari ilham */
	amir = ilham;
	
	cout << "Nilai Ilham adalah = " << ilham << endl;
	cout << "Nilai Raka adalah = " << raka << endl;
	cout << "Nilai Amir adalah = " << amir << endl;
	
	getch();
}