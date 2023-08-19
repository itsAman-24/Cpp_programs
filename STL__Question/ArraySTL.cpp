#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[4] = {1,3,6,5};     //Initilisation of Normal array

    array<int,5> a = {4,7,8,9,4};     //Initilisation of STL Array 

    int size = a.size();           // calculating size of STL Array

    for(int i = 0; i < size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 3 position:"<<a.at(2)<<endl;         //For accessing any particular location

    cout<<"Array is empty or not:"<<a.empty()<<endl;      //For checking Array is empty or not , empty() function will return boolean value (0 or 1)

    cout<<"First element:"<<a.front()<<endl;              // For accessing first element 

    cout<<"Last element:"<<a.back()<<endl;                //For accessing last element
}
