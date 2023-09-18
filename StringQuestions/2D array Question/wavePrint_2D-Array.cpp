#include <bits/stdc++.h>
using namespace std;

/*Wave print ko absorve krne pr pta lga that ki jb column
  ki value ODD hai then elements niche se print hona start
  hoga But agr column ki value EVEN hai then elements upr se
   print hona start ho jayega*/

   

int flowPattern(int arr[][4], int row_size) {

    for(int col = 0; col < 4; col++) {    // it will traverse on every column 

        if(col % 2 == 0) {  // col is even 

             for(int row = 0; row < row_size; row ++) {  // loop start krdo upr se 
                cout << arr[row][col] << " ";
            }

            

        }

        else {    // col is odd
           
            for(int row = row_size-1; row >= 0; row--) {  // loop start krdo niche se 
                cout << arr[row][col] << " "; 
            }
        }

        cout << endl;
    }

}

int main() {

    // vector<vector<int>> v;

    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(9);
    // v.push_back(1);
    // v.push_back(5);
    // v.push_back(8);
    // v.push_back(0);
    // v.push_back(13);

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    flowPattern(arr,3);

}