#include <iostream>
using namespace std;

int main (){
	int a [5][2]={{10,2}, {20,3}, {30,4}, {40,5}, {50,2}} ;
	for (int i=0; i <5; i++)
		for (int j=0; j<2; j++){
			cout << "a[" << i << "][" << j << "] = " <<a [i][j] <<endl;
			
		}
}
