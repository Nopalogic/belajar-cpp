
#include <iostream>

using namespace std;

int main(){
 int A[]={50, 9, 7, 3, 4, 12, 38, 2, 18, 28, 29};
 int n=sizeof(A)/4;
 int temp;
 bool swap=true;
 
 cout<<"Unsorted order: ";
 for(int a=0;a<n;a++){
  cout<<A[a]<<" ";
 }
 
 while(swap){
  swap=false;
  for(int i=0;i<n-1;i++){
   if(A[i]>A[i+1]){
    temp=A[i];
    A[i]=A[i+1];
    A[i+1]=temp;
    swap=true;
   }
  }
 }
 
 cout<<endl<<"Sorted order: ";
 for(int a=0;a<n;a++){
  cout<<A[a]<<" ";
 }
}
