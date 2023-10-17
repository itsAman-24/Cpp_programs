#include <iostream>
using namespace std;

void reverseString (string& name, int i, int size) {   /* here we are passing the string as a reference variable so that the 
                                                       change will occur in the original name */
                                                       
    //Base case
    if(i >= size/2) {
        return ;
    }
    swap(name[i],name[size-i-1]);             // HERE WE ARE NOT USING ANY SECOND POINTER WE ARE PLAYING WITH i ONLY
    i++;
    

    reverseString(name, i, size);
   
   // return ans;

}

int main() {
   string name = "RAHUL";
   reverseString(name, 0, 5);
   cout << name << endl;
}