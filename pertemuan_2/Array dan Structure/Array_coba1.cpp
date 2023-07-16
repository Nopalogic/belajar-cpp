#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int data[8]={1,6,2,9,12,87,43,11};
    int n=8;

    do{
        for(int i=0;i<n;i++)
        {
            cout<<data[i]<<" ";
        }
        getch();
        cout<<endl;

        for(int i=0;i<n-1;i++)
        {
            data[i]=data[i+1];
        }

        n=n-1;
        cout<<endl;
        if(n==0)
        {
            cout<<"Data kosong!!!";
        }
    }while(n!=-1);
}
