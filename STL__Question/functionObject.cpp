#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std ;
int main(){
    
    vector<int> v;

    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(11);

    cout << "11 is present or not-> " << binary_search(v.begin() , v.end() , 11);  // using inbuild binary search algorithm

    
    


    return 0;
}