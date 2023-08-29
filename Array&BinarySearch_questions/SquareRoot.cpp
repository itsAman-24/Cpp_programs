#include <iostream>
using namespace std;

int SquareRoot( int arr[], int num,int size ) {
    int s = 0;
    int e = size -1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s <= e) {
      
      if(arr[mid] * arr[mid] == num) {
        return mid;
      }

      else if(arr[mid] * arr[mid] < num) {
        ans = mid;
        s = mid + 1;
      }

      else {
        e = mid -1;  
      }

      mid = s+(e-s)/2;

    }
    return ans;
}

int main() {
    int size;
    int num;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
     cout<<"Enter the number to find Square root:"<<endl;
    cin>>num;

    int arr[size];

    cout<<"Enter the elements of array:"<<endl;
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"The Root is:"<<SquareRoot(arr,num,size);


}