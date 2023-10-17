#include <iostream>
using namespace std;
bool checkPalindrome(string& str, int i) {
    if(i >= str.length()/2) 
        return true;
    
    if(str[i] == str[str.length() - i -1]) {

        i++;
        checkPalindrome(str, i);
    }

    // else {                        //This else part is optional find by yourself that why it is optional
    //     return false;
    // }

    

     
    
}

int main( ){
    string str = {"RARA"};



    bool result = checkPalindrome(str, 0);

    if(result) {
        cout << "Palindrome" << endl;
    }

    else {
        cout << "Not palindrome " << endl;
    }
}