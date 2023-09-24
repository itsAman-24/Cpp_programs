#include <bits/stdc++.h>
using  namespace std;

void Rotate(vector<vector<int>> &matrix) {
    int totalrow = matrix.size();
    int totalcol = matrix[0].size();

    int startingrow = 0;
    int startingcol = 0;

    int endingrow = totalrow - 1;
    int endingcol = totalcol - 1;
    int total = totalrow * totalcol;

    for(int col = startingcol; col <= endingcol; col++) {

        for(int row = endingrow; row >= startingrow; row--){
             
            cout << matrix[row][col] << " ";
            
        }

        cout << endl;

    }

}  


int main() {

    vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
    Rotate(matrix);



}










