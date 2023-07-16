#include <iostream>
#include <conio.h>

using namespace std;
struct Date{
          int dd;
          int mm;
          int yyyy;
        };
struct Time{
          int h;
          int m;
          int s;
        };
struct Login{
          int ID;
          Date tglLogin;
          Time waktuLogin;
        };

int main()
{
    Login user[3];

    for(int i=0;i<3;i++)
    {
    cout<<"\nUser ke-"<<i+1<<endl;
    cout<<"ID : ";cin>>user[i].ID;
    cout<<"\nTanggal login\n";
    cout<<"Hari  : ";cin>>user[i].tglLogin.dd;
    cout<<"Bulan : ";cin>>user[i].tglLogin.mm;
    cout<<"Tahun : ";cin>>user[i].tglLogin.yyyy;
    cout<<"\nWaktu Login\n";
    cout<<"Jam   : ";cin>>user[i].waktuLogin.h;
    cout<<"Menit : ";cin>>user[i].waktuLogin.m;
    cout<<"Detik : ";cin>>user[i].waktuLogin.s;
    cout<<"\nTerimakasih Atas Pengisiannya\n";

    cout<<"\nData User ke-"<<i+1<<endl;
    cout<<"Login ID   : "<<user[i].ID<<endl;
    cout<<"Login Date : "<<user[i].tglLogin.dd<<"-"<<user[i].tglLogin.mm<<"-"<<user[i].tglLogin.yyyy<<endl;
    cout<<"Login Time : "<<user[i].waktuLogin.h<<"-"<<user[i].waktuLogin.m<<"-"<<user[i].waktuLogin.s<<endl;

     }
     getch();
    return 0;
}
