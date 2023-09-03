#include <iostream>
#include <vector>
using namespace std;

void mergeArray(int arr1[], int m, int arr2[], int n, int arr3[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n) {

        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else {
            arr3[k] = arr1[j];
            k++;
            j++;
        }
    }

    // at this point it may happen that on of the array ends so we have to copy the remaining elements in arr3[k]

    while(i < m) {
        //copy kr rhe hai remaining elements ko
        arr3[k] = arr1[i];
        k++;
        i++;
    }

     while(j < n) {
         //copy kr rhe hai remaining elements ko
        arr3[k] = arr2[j];
        k++;
        j++;
    }

}


void display(int ans[], int size) {
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
}



int main () {
    int arr1[4] = {1,4,6,8};
    int arr2[3] = {2,3,7};
    
    int arr3[7];
    mergeArray(arr1,4,arr2,3,arr3);
    display(arr3,7);

    return 0;
}