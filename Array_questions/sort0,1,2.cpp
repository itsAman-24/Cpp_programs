#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)                         /* we can also use switch case function to solve this 
                                                    problem switch (arr[mid])
                                                    {
                                                    case:0, case:1,case:2
                                                    and do swapping when case matches */
                                                       
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {0, 2, 1, 0, 1, 2, 0, 1, 2};
    sort(arr, 9);

    return 0;
}