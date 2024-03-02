#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,45,23,12,53};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the key you want to search for: " << endl;
    cin >> key;
    bool flag = false;

    for(int i = 0; i <= size; i++) {
        if(arr[i] == key) {
            flag = true;
            break;
        }
    }

    if(flag == true) {
        cout << key << " is present in the array" << endl;
    }

    else {
        cout << key << " is not present in the array" << endl;
    }
}
