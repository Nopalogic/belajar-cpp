#include <iostream>
using namespace std;

int main(){
	cout<<"mencari nilai maksimal pada array"<<endl;
	
	int input[100], arrCount, i, maxNumber;
	cout<<"Masukkan jumlah elemen array: ";
	cin >> arrCount;
	
	cout<<"Input "<<arrCount<< " angka (dipisah dengan enter): "<<endl;
		
	for(i=0;i<arrCount;i++){
		cin >> input[i];
	}
	cout<<endl;
	
	maxNumber = input[0];
	for(i=0;i<arrCount;i++){
		if(input[i]>maxNumber){
			maxNumber = input[i];
		}
	}
	
	cout << "Nilai maksimum adalah: "<<maxNumber<< endl;
	return 0;
}