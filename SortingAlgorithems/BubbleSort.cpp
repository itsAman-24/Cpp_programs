#include <iostream>
using namespace std;
void sort(int arr[], int size) {

    for(int i = 1; i < (size-1); i++) {  // showing the rounds                          time complexcity O(n^2)
                                                                                    //  space complexcity O(1)

        for(int j = 0; j < (size-i); j++) {  // showing the steps in each round

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }

        }
    }

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout << "Enter the size" <<endl;
    cin >> size;

    int arr[size];
    cout<<"Enter the elements"<<endl;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr,size);
}