#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int size) {
    int start = 0; 
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start < end) {
        if(arr[mid] > arr[0]) {
            start = mid + 1;
        }

        else {
            end = mid;
        }

        mid = start + (end-start)/2;
    }

     return arr[mid];

}

int main() {
    
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array" << endl;

    for(int i =0; i < size; i++) {
        cin >> arr[i];
    }

   cout << pivot(arr,size) << endl;
}