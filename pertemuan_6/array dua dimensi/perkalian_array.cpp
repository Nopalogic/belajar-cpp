#include <iostream>
using namespace std;

int main()
{
    int a[3][2], b[3][2], hasil[3][2]; // deklarasi variable matriks dengan 3baris dan 2kolom
    int i,j;
 
    cout<<"matriks a: "<<endl;
    for (i=0;i<3;i++)// deklarasi jumlah baris
    {
        for (j=0;j<2;j++)// deklarasi jumlah kolom
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";// keterangan elemen matriks a
            cin>> a[i][j];// input nilai elemen a
         
        }
    }
 
    cout<<endl;
 
    cout<<"matriks b: "<<endl;
    for (i=0;i<3;i++)// deklarasi jumlah baris
    {
        for (j=0;j<2;j++)// deklarasi jumlah kolom
        {
            cout<<"b["<<i<<"]["<<j<<"]= ";// keterangan elemen matriks b
            cin>> b[i][j];// input nilai elemen b
         
        }
    }
 
    cout<<endl;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            hasil[i][j]= a[i][j]*b[i][j];// deklarasi hasil perkalian
            cout<<"hasil ["<<i<<"]["<<j<<"]= "<<hasil[i][j];// output hasil
            cout<<endl;
        }
    }

    system("pause");
    return 0;
}
 
