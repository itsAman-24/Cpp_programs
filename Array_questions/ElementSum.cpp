#include <iostream>
using namespace std;                         //Sum of array 

void totalSum(int array[], int num){
    int sum = 0;
    for(int i = 0; i < num; i++){
         sum+=array[i];
    }

    cout<<"The sum is:"<<sum<<endl;
} 

int main(){
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array that you want::"<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    totalSum(arr,size);


}