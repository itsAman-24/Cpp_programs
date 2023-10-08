#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the n-> " << endl;
    cin >> n;

    int *arr = new int[n];    // creating array dynamically,Hence it is getting memory location inside the HEAP 
    
    cout << "Enter the values in array-> " << endl;

    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    cout <<"Displaying: " << endl;

    for (int i = 0 ; i < n; i++) {
        cout << arr[i] <<"  ";
    }

    cout << endl;

    



}