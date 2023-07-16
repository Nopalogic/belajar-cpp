#include <iostream>

using namespace std;

typedef struct orang
{
    char nama[30];
    short umur;
}
org;
main(){
    org saya[5];
    int i,x;
    for(i=0; i<=4; i++)
    {
        cout<<"Nama : ";
		cin.getline(saya [i].nama,30);
        cout<<"Umur : ";cin>>saya[i].umur;
        cout<<endl;
    }
   for(x=0; x<=4; x++)
   {
       cout<<"Data ke ["<<x<<"] "<<"bernama "<<saya[x].nama<<" dan berumur "<<saya[x].umur<<" tahun";
       cout<<endl;
   }
}
