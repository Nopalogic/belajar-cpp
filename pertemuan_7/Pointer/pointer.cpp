#include <iostream>
using namespace std;


int main()
{

   // variabel
    int var = 8;

    // inisialisasi pointer
    int *ptr = &var;

    printf("alamat 'var' = %d\n", &var);
    printf("alamat '*ptr' = %d\n", ptr);
    
    return 0;
    
}

