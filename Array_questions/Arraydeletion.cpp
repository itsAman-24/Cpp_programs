#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int num = 10;
    cout<<"Enter the elements in the array"<<endl;
    for(int i = 0; i <= num; i++)
    { 
        cin>>arr[i];
    }
    
    int element;
    cout<<"Enter the element that you want to delete from the array"<<endl;
    cin>>element;
    int found = 0;
    
    for(int i = 0; i < num; i++)
    {
        if(arr[i] == element)
        {
            for(int j = i; j < (num-1); j++)
            {
                arr[j] = arr[j+1];
                found = 1;
                // i--;
                // num--;

            }
        }
    }

    if(found == 0){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element deleted successfully"<<endl;
    

    for(int i = 0; i < num; i++)
    {
        cout<<arr[i]<<"  ";

    }
    }

   return 0;   
}