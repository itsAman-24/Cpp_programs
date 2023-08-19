#include <iostream> 
#include <limits.h>                                                  //Find max and min element in the array
using namespace std;

int findmin(int arr[], int limit)
{
    int mini = INT_MAX;

    for(int i = 0; i <= limit; i++){
    mini = min(mini, arr[i]);    // inbuild function to calculate minimum from array____same goes for maximum number just replace ((min)) with ((max))

    } 
    return mini;
}

int findmax(int arr[], int limit)
{
    int max = INT_MIN;

    for (int i = 0; i <= limit; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int size;
    cout << "Enter how many no. you will enter the array->" <<endl;
    cin >> size;

    int array[100];
    
    if(size == 0){
        cout<<"Error...."<<endl<<"Your number should be greater then 0"<<endl;
    }

    else{
    cout<<"Now enter the elements of the array that you want->"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    

    cout << "The maximum value is ::" << findmax(array, size)<<endl;
    cout << "The minimum value is ::" << findmin(array, size)<<endl;
    }
}
