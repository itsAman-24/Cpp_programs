#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(6);   // inserting element from backside
    d.push_front(4);  //inserting element from front
    d.push_front(7);
    d.push_back(5);

    for(int i:d){
        cout<<i<<endl;
    }

    d.pop_back();   // removing element from back
    d.pop_front();  //removing element from front
    cout<<"After poping "<<endl;
    
    for(int i:d){
        cout<<i<<endl;
    }


}