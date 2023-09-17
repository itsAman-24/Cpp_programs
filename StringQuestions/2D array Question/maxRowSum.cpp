#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[][4]) {
    int maxi = INT_MIN;
    int row = -1;

    for(int j = 0; j < 4; j++) {
        int sum = 0;
        int index = -1;
       
        for(int i = 0; i < 3; i++) {

            sum += arr[i][j];
           
        }

        cout << "Sum of " << " row is : " << sum << endl;
        
        if(sum > maxi) {
            maxi = sum;
            index = j;
        }
    }
        
        
        return maxi;



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

    cout << "The max. sum is " << maxSum(arr);


}