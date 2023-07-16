#include <iostream>
using namespace std;

int main (){
	int a[10][10];
	for (int i = 1; i<=10;i++){
		for (int j=1;j<=10;j++){
		a[i][j]=(i+1)*(j+1);
	}
	cout << a[1][1];
	}
}
