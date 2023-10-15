#include <iostream>
using namespace std;
int sumArray(int *array , int size , int sum) {
    if(size == 0) {
        return 0; 
    }

    if(size == 1) {
        return array[0];
    }

    else {
        sum = array[0];
        sum += sumArray(array+1, size-1,sum);
        return sum;
        
    }
   

}


int main() {
    int arr[5] = {3,2,3,4,5};
    cout << "The sum is -> " << sumArray(arr,5,0);

}