#include <iostream>

using namespace std;

int main (){

    int data[5] [3]= {{3, 4, -1}, {2, 3, 0}, {1, 1, 2}, {5, 9, -4}, {6, 6, 2}};
    int j, k;

   for (j=0; j<=4; j++){
        for (k=0; k<=2; k++)
        cout<<"data["<<j<<"] ["<<k<<"]="<<data[j] [k]<<endl;
    }

}

