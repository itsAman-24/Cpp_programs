#include <iostream>
using namespace std;

bool binarSearch(int arr[] , int start , int end, int key ,int size) {
    //Base case
    if(start > end) {
        return false;
    }
    int mid = start + (end-start) / 2;

    if(arr[mid] == key) {
        return true;
    }

    if(arr[mid] > key) {
       binarSearch(arr , start , mid - 1 , key , mid);
      
    }

    else {
       binarSearch(arr , mid + 1 , end, key , mid);
       
    }

}

int main() {
    int arr[6] = {1,6,8,12,34,57};
    int key;
    cout << "Enter the key value -> " << endl;
    cin >> key;
    
    bool result = binarSearch(arr , 0 , 5 , key , 6);

    if(result) {
        cout << "Key value is present " << endl;
    }

    else {
         cout << "Key value is not present " << endl;
    }


}