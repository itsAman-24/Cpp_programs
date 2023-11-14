#include<iostream>
using namespace std;
int main() {
    int arr[6] = {4,6,3,7,-1,-5};
    for(int i = 1; i < 6; i++) {
        arr[i] = arr[i] + arr[i-1];
    }
    
    int i,j;
    cout << "Enter the range in which  you want to find sum inside the array " << endl;
    cout << "Enter starting index " << endl;
    cin >> i;
    cout <<"Enter the ending index " << endl;
    cin >> j;

    if(j >= 6)
    cout << "Your index should be in range of 0 - 5 in array " << endl;
    
    else
    cout << "The sum is -> " << arr[j] - arr[i-1] << endl;

    // for(int i = 0; i < 6; i++) {
    //     cout << arr[i] <<" ";
    // }
}