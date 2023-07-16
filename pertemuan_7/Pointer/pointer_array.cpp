#include <iostream>
using namespace std;

int main()
{
  int Nilai[]={45, 23, 50, 8, 12, 10, 15};
  int *xPtr_Nilai;
  int i;
  xPtr_Nilai = Nilai;
  cout<<"\nNilai Ptr_Nilai  : "<<xPtr_Nilai;
  cout<<"\nAlamat array Nilai  : "<<xPtr_Nilai;
  cout<<"\nNilai yang ada pada alamat "<<xPtr_Nilai<<"adalah "<<*xPtr_Nilai;
  cout<<"\nElemen array indeks pertama  : "<<Nilai[0];
  cout<<"\nElemen Array (dgn Array)  : ";
  for(i=0;i<7;i++)
    cout<<Nilai[i]<<" "; //mencetak elemen array
  cout<<"\n\nElemen Array (dgn pointer)  : ";
  for(i=0;i<7;i++)
    cout<<*(Nilai+i)<<" "; //mencetak elemen array
  
}
