#include <iostream>
using namespace std;
int main() {

    int arr[5] = {12,34,23,54,23};
    cout << "Array is-> " << arr << endl;    // in int type array its name will points to its first element

    char ch[5] = "Aman";                     // in char type array its name will point on the whole string
    cout << "Char is-> " << ch << endl;
    cout << &ch << endl;
    cout << *ch << endl; 

    char *c = &ch[0];
    cout << c << endl;

}