#include <bits/stdc++.h>
using namespace std;

//LINEAR SEARCH

// bool checkKey(int arr[] , int key, int size) {
//     for(int i = 0; i <= size; i++) {
//         if(arr[i] == key) {
//             return true;
//         }
//     }

//     return false;
    
// }


//BINARY SEARCH

bool checkKey(int arr[] , int size , int key) {
    int srt = 0;
    int end = size-1;
    int mid = (srt + end ) / 2;

    while(srt <= end) {
        if(arr[mid] == key) {
            return true;
        }

        else if(arr[mid] > key) {
            end = mid;
        }

        else {
            srt = mid + 1;
        }
       
        mid = (srt + end ) / 2;
    }
    return false;

}

int main() {
    int array[6] = {1,7,3,6,2,45};
    int key;
    cout << "Enter the key you want to search" << endl;
    cin >> key;
    int size;

    bool result = checkKey(array,6,key);

    if(result) {
        cout << "Key is present inside the array" <<endl;
    }

    else {
        cout << "Key is not present inside the array" << endl;
    }
}