#include <iostream>
 
using namespace std;
 
int hitungFactorial(int input) {
  int hasil = 1;
  int i;
  for(i=1;i<=input;i++) {
    hasil = hasil * i;
  }
  return hasil;
}
 
int main()
{
  cout << "##  Program C++ Hitung Faktorial ##" << endl;
  cout << "===================================" << endl;
  cout << endl;
 
  int angka;
 
  cout << "Input angka: ";
  cin >> angka;
 
  cout << angka << "! = " << hitungFactorial(angka);
  cout << endl;
 
  return 0;
}
