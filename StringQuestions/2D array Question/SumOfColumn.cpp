#include <bits/stdc++.h>
using namespace std;

void columnSum(int arr[3][4]) {
    
    int n = 1;
   
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        
        for(int j = 0; j < 4; j++) {

            sum += arr[i][j];
           

        }
        
        cout << "Sum of " << n << " column is : " << sum << endl;
        n++;
        
    }

    cout << endl;
}

void rowSum(int arr[3][4]) {
    
    int n = 1;
   
    for(int j = 0; j < 4; j++) {
        int sum = 0;
       
        for(int i = 0; i < 3; i++) {

            sum += arr[i][j];
           

        }
        
        cout << "Sum of " << n << " row is : " << sum << endl;
        n++;
        
    }
}

int main() {
    int arr [3] [4];
    cout << "Enter the elements of your 2D array" << endl;

    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 4; j++) {
            cin >> arr[i] [j];
        }
    }

    cout << "Your array is::" << endl;

     for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 4; j++) {
            cout << arr[i] [j] << " ";
        }

        cout << endl;
    }

    columnSum(arr);
    rowSum(arr);
}