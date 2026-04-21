#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    cout << &a << endl;
    cout << &(ptr) << endl;
    cout << *ptr << endl;
    cout << *(&a) << endl;
    cout << ptr <<endl;

    // Pointer to pointer
    int** parPtr = &ptr;
    cout << &ptr << endl;
    cout << parPtr << endl;

    return 0;
}