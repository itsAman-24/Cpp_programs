#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size, int i ) {
    if(size == 0 || size == 1)
       return ;

    //1 step khud kr rhe hai

    for(int i = 0; i < size-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i] , arr[i+1]);
        }
    }
    
    //Baki k steps recursion smbhal rha hai

    bubbleSort(arr,size-1,i);


    
}



int main() {
    int arr[] = {2,4,5,6,4};
    bubbleSort(arr,5,0);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
    

}