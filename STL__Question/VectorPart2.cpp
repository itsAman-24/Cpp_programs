#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){  // how vector is passed in a function
     for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
   cout<<endl;
}


int main(){
   vector<int> vec1;
   int element;
   for(int i = 0; i < 4; i++){
      cout<<"Enter the element to add in the vector->>"<<endl;
      cin>>element;
      vec1.push_back(element);
}
   cout<<"Your vector is: ";

   display(vec1);

   vector<int> :: iterator iter; // with the help of iterator we can traverse to the element in vector
   iter = vec1.begin(); // pointing the iterator to the begining of the vector
   vec1.insert(iter,45); // inserting element in vector with help of iterator
   display(vec1);

      

}