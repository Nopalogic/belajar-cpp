#include <iostream>
using namespace std;

int main(){
	int x[4]={12,2,7,10}, y[6]={15,4,16,20,25,30}, z[10];
	int j = 0;
	
	cout << "Array X" << endl;
	for(int i = 0; i< 4; i++){
		cout << x[i] << " ";
	}
	cout << endl;
	
	cout << "\nArray Y" << endl;
	for(int i = 0; i< 6; i++){
		cout << y[i] << " ";
	}
	cout << endl;
	
	for(int i = 0; i < 4; i++){
		if(x[i] < 10){
			z[j] = x[i];
			j++;
		}
	}
	
	for(int i = 0; i < 6; i++){
		if(i % 2 == 1){
			z[j] = y[i];
			j++;
		}
	}
	
	cout << "\nArray Z" << endl;
	for(int i = 0; i < 5; i++){
		cout << z[i] << " ";
	}
	
	return 0;
}


