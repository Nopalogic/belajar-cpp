#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ int A [5]={20,9,1986,200,13},n,hapus;
    cout<<"  PENGHAPUSAN DATA PADA INDEKS ARRAY"<<endl;
    cout<<"======================================"<<endl;
  cout<<"Data yang lama\n";

  for (n=0;n<5;n++)
  {
    cout<<A[n]<<" ";
  }
  cout<<"\n\nIndeks data yang ingin dihapus : ";
  cin>>hapus;
  cout<<"\nData yang berada pada indeks ke-"<<hapus<<" berhasil dihapus"<<endl;
  cout<<"\nData yang baru\n";
  for (n=hapus-1;n<5-1;n++)
  {
    A[n]=A[n+1];
  }
  for (n=0;n<4;n++)
  {
    cout<<A[n]<<" ";
  }
  getch();
  return 0;
}
