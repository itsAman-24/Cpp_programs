#include <iostream>
using namespace std;

bool pairSum(int array[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                cout<<array[i] <<"  "<<array[j] << endl;
                return true;
            }
        }
        
    }
      return false;
}
int main()
{

    int size, target;
    cout << "Enter the size and the target::" << endl;
    cin >> size;
    cin >> target;

    int array[size];

    cout << "Enter the elements in your array::" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout<<endl;

    bool sum = pairSum(array, size, target);

    if(sum)
    {
        cout<<"Congo.. Target found"<<endl;
    }

    else
    {
        cout<<"Target not found"<<endl;
    }

    return 0;
}
