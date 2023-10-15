#include <iostream>
using namespace std;

bool isSorted(int* arr, int size) {
    // Base case
    if(size == 0 || size == 1)
    return true;

    if(arr[0] > arr[1])     /* checking the first two elements of array that it is sorted or not ..... ek baar 
                               check krlo baki elements k liye recursion relation check kr lega */
    return false;
    
    else {
    // recursion relation 
    bool ans = isSorted(arr+1 , size-1);   // checking the remaining elements in array that it is sorted or not
    return ans;
    }

    
}

int main() {
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;

    int* arr = new int[size];
    
    cout << "Enter the elements of array " << endl;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
 
    bool result = isSorted(arr,size);

    if(result) {
        cout << "Array is sorted" << endl;
    }

    else{
        cout << "Array is not sorted" << endl;
    }


}