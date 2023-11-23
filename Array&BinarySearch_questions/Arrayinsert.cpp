#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n:" << endl;
    cin >> n;
    int arr[n+1];
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

    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = number;

    for(int i = 0; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
