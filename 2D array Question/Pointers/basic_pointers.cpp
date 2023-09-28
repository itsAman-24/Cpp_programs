#include <iostream>
using namespace std;

int main() {
    int *ptr = 0;
    int i = 67;
    
    ptr = &i;
    cout << ptr << endl;        // will print address of i 
    cout << *ptr << endl;       // will print value stored at ptr
    cout << &ptr << endl;       // will print address of ptr
    
    int **ptr1 = &ptr;          // pointer to the pointer, and will store address of other pointer
    cout << *ptr1 << endl;







    return 0;
}