#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector <int> &v, int input) {
    int s = input;
    int e = v.size() - 1;
    while(s <= e) {

        swap(v[s], v[e]);
        s++;
        e--;

    }

   return v;
}

void print(vector <int> &v) {
   
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
 
     cout << endl;
}

int main() {
    vector <int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(9);
    
    int index;
    cout << "Enter the index from where you want to reverse" << endl;
    cin >> index;

    vector <int> ans = reverse(v,index);

    cout << "Printing the Reverse vector" << endl;
    print(ans);



    return 0;
}