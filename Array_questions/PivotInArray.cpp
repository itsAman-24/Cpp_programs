#include <iostream>
using namespace std;

int main() {
    int arr[9] = {5,6,7,8,0,1,2,3,4};
    int s = 0;
    int e = 8;
    int mid = s +(e-s)/2;

    while(s < e) {
        if(arr[mid] > arr[0]) {           // this line says that the mid value will lie on (1st sorted part) in array {5,6,7,8}
            s = mid + 1;
        }

        else if(arr[mid] < arr[0]) {     // this line says that mid will fall in (2nd sorted part) of array {0,1,2,3,4}
                                        
             e = mid;                    // The Mid will decide that which part will generate the required answer (Pivot element)
         }

        mid = s +(e-s)/2;
    }
     
    cout<<"The Pivot element is ::"<<arr[e]<<endl;
}