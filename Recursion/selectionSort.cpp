#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int *arr,int i,int size) {
    if(i == size) {
        return ;
    }
    
    int minIndex = i;
    for(int j = i+1; j < size; j++) {
        if(arr[j] <= arr[minIndex]) 
            minIndex = j;
    }
    swap(arr[minIndex] , arr[i]);
    i++;

    selectionSort(arr,i,size-1);
     
}

int main() {
    int arr[6] = {3,5,2,5,3,12};
    selectionSort(arr,0,6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] <<" ";
    }
    
}

// void selectionSort(vector<int>& arr, int n)
// {   
//    //base case
//     if(n == arr.size()) {
//         return ;
//     }

//     int minIndex = n;
//     for(int j =n+1; j < arr.size(); j++) {
//         if(arr[j] < arr[minIndex]) {
//             minIndex = j;
//         }
//     }

//     swap(arr[minIndex],arr[n]);
//     n++;

//     return selectionSort(arr, n);
// }

// int main() {
//     vector<int> arr = {3,2,4,5,6,4,2};
//     selectionSort(arr,0);

//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] <<" ";
//     }
// }