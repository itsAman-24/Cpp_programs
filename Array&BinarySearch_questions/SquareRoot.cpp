#include <iostream>
using namespace std;

long long int SquareRoot( int arr[], int num,int size ) {
    long long int s = 0;
    long long int e = size -1;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;

    while(s <= e) {

      long long int square = arr[mid] * arr[mid];
      
      if(square == num) {
        return arr[mid];
      }

      if(square < num) {
        ans = arr[mid];
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
    cout <<" Enter the size of array:" << endl;
    cin >> size;
     cout <<" Enter the number to find Square root:" << endl;
    cin>>num;

    int arr[size];

    cout <<" Enter the elements of array:" << endl;
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int get = SquareRoot(arr,num,size);

    if(get == -1) {
      cout <<" Root not found" << endl;
    }

    else {
      cout <<" The root is:" << get << endl;
    }


}