#include <bits/stdc++.h>
using namespace std;

/*In map we have two things one is key and the other one is its value.
  The key will point to at least one value and every key is an unique 
  key. One key cannot points over two different values but Two different
  keys may points to same value and ordered Map will return a sorted answer
  it will sort the key m.first.

  */

int main() {
    map<int,string> m; 

    m[1] = "Aman";    // this is how we take input for a map in [] square bracets we take key and then we assign value to that key
    m[3] = "Pandey";
    m[2] = "Deepu";
    m[18] = "Singh";
    m[0] = "Jamun";

    m.insert( {9,"Arru"} );   // Another way to take input in a map

    cout << "Before erase->" << endl;

    for(auto it:m) {
        cout << it.first <<" " << it.second << endl;  // By using it.first (key) and it.second (value) we are printing the key and its value 
    } 


    cout<<"2 is present or not-> " << m.count(2);  // By using this function we can check wheather the key is present in map or not

    m.erase(18);    // using this function we can erase the key and its values

     cout << "After erase->" << endl;
    
    for(auto i:m) {
        cout << i.first << " " << i.second <<endl;
    }


   

    if(m.find(3) != m.end()) {
        cout << "Key Found..... The Value at this key is-> " << m[3];
    }

    else {
        cout << "Key is Not found" << endl;
    }
    





   
    
}

