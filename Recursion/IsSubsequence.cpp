#include <iostream>
using namespace std;

//subsequence means the characters are in same order in both the string (str1 and str2) .
//In this case 'a' will come first ,'b' at second and 'c' at last

bool check(string str1, string str2) {
    int i = 0;
    for(int j = 0; j < str2.size(); j++) {
        if(str2[j] == str1[i]) 
            i++;

        if(i >= str1.size())
        return true;
    }
    return false;
}

int main() {
    string str1 = {"abc"};
    string str2 = {"agbtc"};
    bool ans = check(str1, str2);

    if(ans) {
        cout << "THESE ARE THE SUBSEQUENCIAL STRINGS" << endl;
    }

    else {
        cout << "THESE ARE NOT THE SUBSEQUENCIAL STRINGS" << endl;
    }
}