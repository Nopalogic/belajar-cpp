#include <iostream>
using namespace std;


int jumlahRekursif(int x, int a){
    cout << "Berapa jumlah pengunjung: ";
    cin >> a;
    if (x==0){
        return a;
    }else{
        return a + jumlahRekursif(x-1,a);
    }
}


main(){
    int n;
    cout << "Masukkan berapa bulan: ";
    cin >> n;
    if(n>0){
        cout << jumlahRekursif(n-1, 0);
    }else{
        return 0;
    }
    
}
