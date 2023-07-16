#include <iostream>
void hitungmundur(int n);
int main()
{
hitungmundur(4); //panggil fungsi rekursif
 return 0;
}
void hitungmundur(int n)
{
using namespace std;
 cout<<"Hitung Mundur..."<<n<<"....>"<<"Level"<< 5-n <<endl;
 if (n>0)
 hitungmundur(n-1); //fungsi memanggil dirinya sendiri
 cout<<n<<":Struktur Data dan Algoritma"<<"........>"<<"Level"<< 5-n <<endl;
}
