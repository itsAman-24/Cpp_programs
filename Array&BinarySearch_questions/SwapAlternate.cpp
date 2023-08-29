#include <iostream>
using namespace std;                              // SWapping of alternate numbers in array

int swapping(int arr[], int size)
{
    int start = 0;
    int end = start + 1;
    int temp;
    while (end < size)
    {
        // temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = arr[end];

        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;

    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int array[100];
    int size;
    cout << "Enter the size of array that you want->" << endl;
    cin >> size;

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    swapping(array, size);
    printArray(array, size);
}