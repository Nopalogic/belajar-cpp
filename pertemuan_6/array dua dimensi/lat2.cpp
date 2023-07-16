#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int data[3] [2]= {{5, 6}, {1, 2}, {0, 0}};
    int i, j;

    cout<<"Data larik 2D "<<endl;cout<<endl;
    cout<<"  A  B "<<endl;
        for (i=0; i<=2; i++){
            for (j=0; j<=1; j++)
            cout<<setw(3)<<data[i][j];cout<<endl;
    }

}
