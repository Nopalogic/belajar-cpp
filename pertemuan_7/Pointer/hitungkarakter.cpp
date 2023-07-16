#include <iostream>
#include <conio.h>

using namespace std;
int ubah (const char *s)
{
	int x =0;
	for (; *s != '\0'; s++)
	++x;
	return x;
}
int main (){
	char string [80];
	cout <<"Ketik sebuah Karakter : ";
	cin.getline(string,100);
	
	cout <<"Jumlah karakter yang diinput adalah " <<ubah(string);
	getch();
}
