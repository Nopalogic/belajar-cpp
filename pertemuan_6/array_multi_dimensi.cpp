#include <iostream>
using namespace std;

int main(){
//	int matrix[3][2]={{1,2},{3,4},{5,6}};
//	int i, j;
//	
//	cout << "Matrix Ordo 3x2" << endl;
//	
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++){
//			cout<<matrix[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;

	int a[5][2]={{10,2},{20,3},{30,4},{40,5},{50,6}};
	
	for(int i=0;i<5;i++){
		for(int j=0;j<2;j++){
			cout<<"a["<<i<<"]["<<j<<"] = " << a[i][j] << endl;
		}
	}
}