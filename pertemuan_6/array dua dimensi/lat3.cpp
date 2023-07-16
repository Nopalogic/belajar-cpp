#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (){

    int data_lulus[3][2];
    int i, j, total;
    system("cls");

    total=0;

    //Inisialisasi data
    data_lulus[0][0]=10;
    data_lulus[0][1]=20;
    data_lulus[1][0]=15;
    data_lulus[1][1]=25;
    data_lulus[2][0]=100;
    data_lulus[2][1]=300;

    //Menampilkan data kelulusan
    cout<<"Tampil Data Lulus "<<endl;cout<<endl;
    cout<<"           TE   TK "<<endl;
        for (i=0; i<=2; i++){
            cout<<"Th ke- "<<i+1;
            for (j=0; j<=1; j++){
                cout<<setw(5)<<data_lulus[i][j];
                total=total+data_lulus[i][j];
            }
            cout<<endl;
    }cout<<endl;
    cout<<"Jumlah yang lulus    = "<<total<<endl;
    cout<<"Rata-rata yang lulus = "<<total/(i*j)<<endl;
}
