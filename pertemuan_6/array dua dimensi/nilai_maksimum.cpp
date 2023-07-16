#include <iostream>

using namespace std;
int main ()
{
	cout <<"PROGRAM MENCARI NILAI MAKSIMAL PADA ARRAY" << endl;
	cout <<"=========================================" << endl;
	cout << endl;
	
	int input[100], arr_count, i, max_num;
	
	cout << "Inputkan Jumlah Element Array : ";
	cin >> arr_count;
	
	cout << "input" << arr_count << "angka (Dipisah dengan enter) :";
	cout << endl;

for (i = 0; i < arr_count; i++){
	cin >> input [i];
}

cout << endl;

max_num = input [0];
for (i=0; i < arr_count; i++){
	if (input [i]> max_num){
		max_num = input [i];
	}
}

cout << "Angka Maksimum adalah : " << max_num;

cout << endl;
return 0;
}
