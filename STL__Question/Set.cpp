#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

                           /* Set will store only unique numbers . It will treat (4,4) as a single 4 
                              And it will return the numbers in sorted form  */
    s.insert(4);                             
    s.insert(8);
    s.insert(2);
    s.insert(0);
    s.insert(4);   
    s.insert(6);

    for(auto i:s) {
        cout<<i<<" ";
    }

    cout << endl;

    cout << "Size of s -> " << s.size() << endl;      // function for getting the size of a set 
   
    set<int>:: iterator itr;
    itr = s.begin();
    itr++;

    itr = s.find(4);   // find() function will return the address/iterator of 4 if present , otherwise it will return the last element address which is s.end()

    
    if(itr != s.end()) {   // so if itr is not equal to s.end() it means that we find 4.
        s.erase(itr);
    }
    
    for(int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;


    

    
      
    set<int>::iterator itr2;
    itr2 = s.find(6); 

    for(auto it=itr2; it != s.end(); it++) {
        cout<<*it<<" "<<endl;
    }
    
    cout<<"6 is present or not-> "<<s.count(6)<<endl;   // s.count() function is used to check whether the number is present or not 

    
     
     
     
     


    
    
}
