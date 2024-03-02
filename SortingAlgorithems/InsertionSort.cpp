#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        
        int temp = arr[i];
        int j = i-1; // initialisation of j 

        for(; j >= 0; j--) {

            if(arr[j] > temp) {
                //shift krdo
                arr[j+1] = arr[j];
            }

            else {
                //ruk jao
                break;
            }
        }

         arr[j+1] = temp;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] <<" ";
    }
}
    

int main() {
    int size;
    cout << "Enter the size" <<endl;
    cin>>size;

    int arr[size];
    cout << "Enter the elements" <<endl;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr,size);

}
