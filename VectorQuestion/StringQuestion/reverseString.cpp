#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size() - 1;

        while(st < e) {
            swap(s[st],s[e]);
            st++;
            e++;
        }
        for(int i = 0; i < s.size(); i++) {
            cout<<s[i]<<" ";
        }
        
    }
int main() {
    vector <char> name;
    name.push_back('e');
     name.push_back('t');
      name.push_back('u');
       name.push_back('s');

       reverseString(name);

}