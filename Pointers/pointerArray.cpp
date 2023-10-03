#include <iostream>
using namespace std;

int main() {
    int arr[5] = {23,43,12,49};

    //  ERROR                we cannot do this because symbol table cannot be changed by anyone
    //  arr = arr + 1;       In symbol table the arr is being mapped with array's first element that's why we cannot change the mapping 
   

    cout << arr << endl;
    cout << *arr << endl;
    cout << &arr << endl;
    cout << arr[0] << endl;
    cout << *arr + 4 << endl;
    cout << arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << (*arr) + 1 << endl << endl;

//   we can also access elements of array by i[arr] , i represents the index and arr represents name of array

   int i = 3;
   cout <<"New way of accessing array element-> " << i[arr] << endl << endl;

   cout <<"size of array is-> " << sizeof(arr) << endl;
   cout << "size of the 1st element is-> " << sizeof(arr[0]) << endl << endl;

   int *ptr = &arr[0];

   cout << "Before Value in ptr is-> " << *ptr << endl;
   cout << "Before ptr is-> " << ptr << endl  << endl;
   ptr = ptr + 1; 
   cout << "After ptr is-> " << ptr << endl;
   cout << "After Value in ptr is-> " << *ptr << endl << endl;

   cout << "size is-> " << sizeof(ptr) << endl;
   cout << "size is-> " << sizeof(*ptr) << endl;
   cout << "size is -> " << sizeof(&ptr) << endl << endl;

   int *p = &arr[0];
   cout << "size is-> " << *p << endl;
   
}