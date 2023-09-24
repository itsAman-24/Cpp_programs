#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> &matrix ,int key) {
    int totalrow = matrix.size();
    int totalcol = matrix[0].size();

    int start = 0; 
    int end = (totalrow * totalcol) - 1;

    int mid = start + (end-start) / 2;

    while(start < end) {

        int element = matrix[mid/totalcol][mid%totalcol];  // we will divide mid index of linear array with totalcol to get row index in 2D array
                                                          // we will divide mid index of linear array with totalrow to get column index in 2D array

        if(element == key) {
           return 1;
        }

        else if(element < key) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        mid = start + (end-start) / 2;

     }

     return 0;

}

int main() {

    vector<vector<int>> matrix = {{2,3,4,5},{5,7,9,12},{13,14,15,20}};
    int key;
    cout << "Enter the key that you want to search-> " << endl;
    cin >> key;

    bool result = binarySearch(matrix,key);

    if(result) {
        cout << "Key is present" << endl;
    }

    else {
        cout << "Key is not present" << endl;
    }


    return 0;
}