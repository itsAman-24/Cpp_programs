#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n:" << endl;
    cin >> n;
    int size = n + 1;
    int arr[size];
    cout<<"Enter the elements in the array:"<<endl;

    for(int j = 0; j <= n; j++){
        cin>>arr[j];
    }

    int number;
    cout << "Enter the number that you want to insert:" << endl;
    cin >> number;

    int index;
    cout << "Enter the index where you want to insert the number:" << endl;
    cin >> index;

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = number;

    for(int i = 0; i <= size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
