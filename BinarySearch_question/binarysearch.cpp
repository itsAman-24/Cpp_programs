#include <iostream>
using namespace std;                                                    //Program to search element in array 
int binarysearch(int arr[], int start, int end, int key)
{

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 2, 5, 3, 6, 7, 8, 9, 11, 14, 18};

    int n = sizeof(array) / sizeof(array[0]);

    int key;
    cout << "Enter the number you want to search in array::";
    cin >> key;

    int result = binarysearch(array, 0, n - 1, key);

    if (result == -1)
    {
        cout << "Element is not found" << endl;
    }
    else
    {
        cout << "Element is found at position::" << result;
    }

    return 0;
}
