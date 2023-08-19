#include <iostream>
#include <vector>              /* VECTOR always used to create an another vector with double of its size when needed and transfer all the data to
                                new vector then destroye the old vector that's why it is known as ((DYNAMIC array))*/

using namespace std;

int main(){

  vector<int> v;          // At the initialisation phase of a vector the memory assignment it to will be ZERO (0)

  cout<<"Capacity of vector is:"<<v.capacity()<<endl<<endl; //Find how much capacity is OR how much memory is assigned to store the values 


  vector<int> a(7,2);  // we are giving capacity of vector which is 7 by ourself and initialising all the elements with 2
  
  cout<<"Capacity of vector is:"<<a.capacity()<<endl;

  vector<int> s(a);  // it will copy all elements from ((vector<int> a;))


  
  cout<<"After push_back opertion"<<endl;

  v.push_back(3);         //By this we add element in the vector
  v.push_back(9);
  v.push_back(7);


  cout<<"Capacity is:" <<v.capacity()<<endl;
  cout<<"Size of vector is:" <<v.size()<<endl<<endl;

  cout<<"Element at position 3 is:" <<v.at(2)<<endl;    // Accessing any particular element 
  cout<<"First element is:" <<v.front()<<endl;          //Getting the first element 
  cout<<"Last element is:" <<v.back()<<endl<<endl;            // Getting the last element 

  v.pop_back();     // It will remove one element from last of the vector after this our vector is of 2 elements now (3,9) & 7 is removed

  cout<<"After pop_out operation"<<endl;
  
  cout<<"Capacity is:" <<v.capacity()<<endl;
  cout<<"Size of vector is:" <<v.size()<<endl<<endl;

  v.clear();       // IT will clear all the elements from the vector but the capacity to store elements will be same as previous

  cout<<"After clear operation"<<endl;
  
  cout<<"Capacity is:" <<v.capacity()<<endl;
  cout<<"Size of vector is:" <<v.size()<<endl<<endl;



}