#include<conio.h>
#include<iostream>
using namespace std;
main()
{
   int ilham,rafli,*raka;
   ilham=75;
   raka =& ilham;
   rafli =*raka;

   cout<<"Nilai Ilham adalah : "<<ilham<<endl;
   cout<<"Nilai Raka adalah  : "<<raka<<endl;
   cout<<"Nilai Rafli adalah : "<<rafli<<endl;

   getch();
}

