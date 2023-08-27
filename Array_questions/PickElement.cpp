#include <iostream>
using namespace std;

int main() {
    int arr[10] = {24,69,100,99,79,78,67,36,26,19};
    int s = 0;
    int e = 9;
    int mid = s+(e-s)/2;

    while(s < e) {
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }

        else {
            e = mid;
        }

        mid = s+(e-s)/2;

 
    }
    
    cout<<arr[s]<<endl;

    return 0;
}