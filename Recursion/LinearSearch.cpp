#include <iostream>
using namespace std;
bool search(int arr[] , int size , int key) {
    if(size == 0) {
        return false;
    }
    
    if(arr[0] == key) {
        return true;
    }

    else {
        search(arr+1,size-1,key);
        
    }

}

int main() {
    int arr[9] = {1,2,5,7,3,6,8,4,12};
    int key;
    cout << "Enter the key value to be searched -> " << endl;
    cin >> key;
    
    bool result = search(arr,9,key);

    if(result) {
        cout << "Key value is present" << endl;
    }

    else {
        cout << "Key value is not present" << endl;  
    }

}