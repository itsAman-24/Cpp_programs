#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    
    int mid = s+(e-s)/2;

    int L1 = mid - s + 1;    //Length of first array
    int L2 = e - mid;        //Length of second array

    int *First_arr = new int[L1];
    int *Second_arr = new int[L2];

    int main_array_index = s;
    
    for(int i = 0; i < L1; i++) {
        First_arr[i] = arr[main_array_index++];
    }
    
    main_array_index = mid + 1;

    for(int i = 0; i < L2; i++) {
        Second_arr[i] = arr[main_array_index++];
    }

    //Merging both the arrays
    int Index1 = 0;
    int Index2 = 0;
    main_array_index = s;

    while(Index1<L1 && Index2<L2) {

        if(First_arr[Index1] < Second_arr[Index2]) {
            arr[main_array_index++] = First_arr[Index1++];
        }

        else {
            arr[main_array_index++] = Second_arr[Index2++];
        }

        while(Index1 < L1) {
             arr[main_array_index++] = First_arr[Index1++];
        }

        while(Index2 < L2) {
             arr[main_array_index++] = Second_arr[Index2++];
        }

    }

    delete []First_arr;
    delete []Second_arr;

}

void mergeSort(int *arr,int s, int e) {
    //Base case 
    if(s >= e) {
        return ;
    }

    int mid = s+(e-s)/2;
    
    //Left part sort krne k liye 
    mergeSort(arr,s,mid);

    //Right part sort krne k liye
    mergeSort(arr,mid+1,e);

    //Dono sorted array ko merge krne k liye 

    merge(arr,s,e);




}

int main() {

    int arr[6] = {3,6,2,8,9,14};
    int n = 6;

    mergeSort(arr,0,n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

}