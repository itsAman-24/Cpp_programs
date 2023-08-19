#include <iostream>
using namespace std;
                                                 // Reversing the array
int reverse(int arr[] , int size){
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;

    }
}

void printArray(int arr[] , int size)
{
    for(int i = 0; i < size; i++){
     cout<<arr[i]<<" ";
    }
}

int main(){
    int array[100];
    int size;
    cout<<"Enter the size of the array->"<<endl;
    cin>>size;
    cout<<"Now enter the elements of your array::"<<endl;
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    reverse(array , size);
    printArray(array , size);

    
}