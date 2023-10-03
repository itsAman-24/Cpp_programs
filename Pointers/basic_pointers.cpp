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

    int *q = ptr;               // copying pointer into other pointer

    cout << ptr <<"  " << q << endl;
    cout << *ptr <<"  " << *q << endl;

    int **m = &ptr;
    cout << m << endl;
   
    int j = 3;
    int *g = &j;

    cout << j << endl;
    cout << g << endl;
    cout << *g << endl;
    
    (*g)++;  //changing the value stored at g is pointing 
    
    g = g + 1;      //changing the value of pointer

    cout << j << endl;
    cout << g << endl;
   







    return 0;
}