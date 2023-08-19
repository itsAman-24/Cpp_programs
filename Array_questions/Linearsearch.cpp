#include <iostream>
using namespace std;
                                                  // searching the element in the array 
bool find(int array[], int key)
{
    for (int i = 0; i <= 10; i++)
    {
        if (array[i] == key)
        {
           return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 75, 73, 43, 6, 73, 52, 21, 100, 90};

    int key;
    cout << "Enter the number that you want to search" << endl;
    cin >> key;

    bool found = find(arr, key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }
    
}