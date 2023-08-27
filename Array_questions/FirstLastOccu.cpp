#include <iostream>
using namespace std;

int Firstoccu(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

   
    while(s <= e) {

        
        if(arr[mid]==key) {
            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid] > key) {
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }
    
        mid = s + (e-s)/2;

    }

    return ans;
}

int LastOccu(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {

        
        if(arr[mid]==key) {
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid] > key) {
            e = mid - 1;
        }

        else {
            s = mid + 1;
    }

     mid = s + (e-s)/2;


    
}
     return ans;
}

int main() {
   int arr[9] = {1,1,1,3,3,3,3,3,4};
   cout<<"The first occurance is::"<<Firstoccu(arr,9,1)<<endl;
   cout<<"The last occurance is::"<<LastOccu(arr,9,1)<<endl;

   cout<<"Total no. of occurance is::"<<(LastOccu(arr,9,1) - Firstoccu(arr,9,1)) + 1<<endl;   // formula for total no. of occurance of an element
}