#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < (size-1); i++) {

        int minIndex = i;
        for(int j = i+1; j < size; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }

        }
        
           swap(arr[minIndex],arr[i]); 
    }

      for(int i = 0; i < size; i++) {
        cout << arr[i]<<" ";
    }
}
    

int main() {
    int size;
    cout << "Enter the size" << endl;
    cin >> size;
    int array[size];
    cout << "Enter the elements in array" <<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

   selectionSort(array,size);

    

}
