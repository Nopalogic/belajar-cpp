#include <iostream>
using namespace std;

typedef struct orang
{
    char nama[30];
    short umur;
}
org;
int main(){
    int number;
    org saya[5];
    int i;
    for(i=0; i <=0; i++) 
    {
        cout <<"Masukan jumlah data : ";
        cin>>number;
        cin.ignore();
       for(int i = 0; i < number; i++){
       cout<<"nama "<< i + 1 <<": ";
       cin.getline(saya[i].nama,30);
        }
       for(int i = 0; i < number; i++){
        cout<<"umur "<< i + 1 << ": ";
        cin>>saya[i].umur;
        //cout<<endl;
       }
    }
    for (i=0; i < number; i++)
    {
        cout<< "data ke ["<<i<<"]"<< " bernama " <<saya[i].nama<<" dan berumur "<<saya[i].umur<<" tahun.";
        cout << endl;
    }
}

