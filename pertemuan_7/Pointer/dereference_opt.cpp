/*Penggunaan Pointer Dereference*/
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int ilham,*raka,amir;
    ilham=75;
    raka=&ilham;   /*Nilai variabel raka adalah merupakan alamat memori dari nilai ilham*/
    amir=ilham;
    cout<<"Nilai Iham adalah "<<ilham<<endl;
    cout<<"Nilai Raka adalah "<<raka<<endl;
    cout<<"Nilai Amir adalah "<<amir<<endl;
    getch();
}

