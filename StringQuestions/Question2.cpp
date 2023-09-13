#include <bits/stdc++.h>
using namespace std;

char ToLowerCase(char ch) {
    if(ch >='a' && ch <='z') {
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
    char ch[5] = {'w','r','t','s','w'};

    cout << "Lower case is " <<  ToLowerCase('B') << endl;


    bool check = palindrome(ch,5);
    
    if(check) {
        cout << "It is a palindrome string" << endl;
    }

    else {
        cout << "It is not a palindrome string" << endl;
    }
}
