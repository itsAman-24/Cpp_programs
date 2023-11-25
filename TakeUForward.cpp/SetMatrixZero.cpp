#include <iostream>
using namespace std;

//Brute Force Solution

// void markRow(int (&arr)[3][4], int i) {
//     for(int j = 0; j < 4; j++) {
//         if(arr[i][j] != 0) {
//             arr[i][j] = -1;
//         }
//     }
// }

// void markCol(int (&arr)[3][4], int j) {
//     for(int i = 0; i < 4; i++) {
//         if(arr[i][j] != 0) {
//             arr[i][j] = -1;
//         }
//     }
// }

// void print(int (&arr)[3][4] ) {
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void setZeros(int (&arr)[3][4]) {

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(arr[i][j] == 0) {
//                 markRow(arr,i);
//                 markCol(arr,j);
//             }
//         }
//     }

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(arr[i][j] == -1) {
//                 arr[i][j] = 0;
//             }
//         }
//     }

//     print(arr);



        
    
// }

//Better Solution

void print(int (&arr)[3][4]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void setZeros(int (&arr)[3][4]) {
    int row[3] = {0};
    int col[4] = {0};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }

        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
           if(row[i] || col[j]) {
              arr[i][j] = 0;
           }

        }
    }

    print(arr);
}


int main() {
   int arr[3][4] = { {1,1,1,1}, {0,1,1,1}, {1,1,1,1} };
   setZeros(arr);
}
