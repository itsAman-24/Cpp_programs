#include <iostream>
using namespace std;

int FindPivot(int arr[],int size) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s < e) {
        if(arr[mid] > arr[0]) {
            s = mid + 1;
        }

        else {
            e = mid;
        }

        mid = s + (e-s)/2;

    }
    // cout<<"Pivot is  "<<arr[e]<<" at: ";
    return e;

}

int main() {
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    
   // int pivot = FindPivot(arr,size);
    
    int key;
    cout<<"Enter the key to search"<<endl;
    cin>>key;

    int pivot = FindPivot(arr,size);
    
    if(pivot <= key <= arr[size-1]) {

        int s = pivot;

        for(int i = s; i < (size-1); i++) {
            if(arr[i] == key) {
                return i;
            }
        }

    }

    else {
        for(int i = pivot; i >= 0; i--) {
            if(arr[i] == key) {
                return i;
            }
        }
    }



}

