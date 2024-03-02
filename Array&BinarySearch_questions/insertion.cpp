#include<bits/stdc++.h>
using namespace std;

int main() {
    int size = 6;
    int* arr = new int[size]{ 1, 2, 3, 4, 5 }; 
    int value,index;
    cout << "Enter the value and its index where you want to insert";
    cin >> value >> index;

    for(int i = size; i >= index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    
    cout << "Array after the insertion" << endl;
     
    for(int i = 0; i < ; i++) {
        cout << arr[i];
    }
    

}