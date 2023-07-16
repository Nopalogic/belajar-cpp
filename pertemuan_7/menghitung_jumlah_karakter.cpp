#include <iostream>
#include <conio.h>

using namespace std;

int ubah(const char *s){
	int x = 0;
	for(; *s != '\0'; s++){
		++x;
		return x;
	}
}

int main(){
	char string[80];
	cout << "Masukkan karakter: ";
	cin.getline(string, 100);
	
	cout << "Jumlah karakter yang dimasukkan adalah " << ubah(string);
	getch();
}