#include <bits/stdc++.h>
using namespace std;



bool valid(char ch) {
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9') ) {
        return 1;
    }

    return 0;
}



char toLower(char ch) {
    if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9') ) {
        return ch;
    }

    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char ch[], int size) {
    int s = 0;
    int e = size - 1;

    while(s < e) {

        if(ch[s] != ch[e]) {                     /* using two pointers approach for checking if 
                                                 first element is equal to last element or not \
                                                 if not equal then return 0 */
            return 0;
        }

        else {
            s++;
            e--;
        }

    }

    return 1;

}





int main() {

    char ch[5] = {'q','5','h','5','q'};

    bool yes = valid(ch);

    if(yes) {

        toLower(ch);

    }

}