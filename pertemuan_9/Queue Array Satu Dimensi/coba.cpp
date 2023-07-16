#include <iostream>
#include <queue>

using namespace std;

int main() {

  // Membuat antrian
  queue<string> animals;

  // memasukkan elemen pada antrian
  animals.push("Kucing");
  animals.push("Ikan");
  animals.push("Dog");
  animals.push("snake");
  
  cout << "Queue: ";

  
  while(!animals.empty()) {

    // menampilkan elemen
    cout << animals.front() << ", ";

   
    animals.pop();
  }

  cout << endl;
 
  return 0;
}
