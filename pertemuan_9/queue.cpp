#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<string> animals;
	
	animals.push("Kucing");
	animals.push("Ikan");
	
	cout << "Queue: ";
	
	while(!animals.empty()){
		cout << animals.front() << ", ";
		animals.pop();
	}
	cout << endl;
	return 0;
}