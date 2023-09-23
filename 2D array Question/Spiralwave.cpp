#include <bits/stdc++.h>
using namespace std;

int spiralWave(vector<vector<int>> &matrix) {

    int totalRow = matrix.size();
    int totalCol= matrix[0].size();

    cout << "Total rows are:" << totalRow << endl;
    cout << "Total columns are:" << totalCol << endl;
        
    

    int count = 0;

    int startrow = 0;
    int startcol = 0;
    int endrow = totalRow - 1;
    int endcol = totalCol - 1;
    int total = totalRow * totalCol;


    while(count < total) {
        
        //Printing the starting row 
        for(int index=startcol; count < total && index <= endcol; index++) {
            cout << matrix[startrow][index] << endl;
            count++;
        } 
          startrow++; 
            

        //Printing the ending column 
        for(int index=startrow; count < total && index <= endrow; index++) {
            cout << matrix[index][endcol] << endl;
             count++;
        }
          endcol--;

        //Printing the ending row
        for(int index=endcol; count < total && index >= startcol; index--) {
            cout << matrix[endrow][index] << endl;
            count++;
        }
          endrow--;

        //Printing the starting  column 

        for(int index=endrow; count < total && index >= startrow; index--) {
           cout << matrix[index][startcol] << endl;
           count++;
        }
          startcol++;
          
    }








}

int main() {
      vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
      spiralWave(matrix);
}
