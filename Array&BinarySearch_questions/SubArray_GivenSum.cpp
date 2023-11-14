#include <bits/stdc++.h>
using namespace std;
void subArray( vector<int> v, int sum, int i, int j) {

    // for(int i = 1; i < v.size(); i++) {
    //     v[i] = v[i] + v[i-1];
    // }

    //Base case
    if(j >= v.size()) {
        return;
    }
  
    if(v[i+j] == sum) {
        cout << "  if " << endl;
        cout << (i+1) << (j+1) << endl;
    }

    else if(v[i+j] < sum) {
        cout << " else if " << endl;
        cout << v[i+j] << endl;
        j++;
        subArray(v,sum,i,j);
    }

    else {
        cout << " else  " << endl;
        cout << v[i+j] << endl;
        i++;
        subArray(v,sum,i,j);
    }

}

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);
    v.push_back(9);
    v.push_back(-5);

    for(int i = 1; i < v.size(); i++) {
        v[i] = v[i] + v[i-1];
    }

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<" " << endl;
    // }

    int sum;
    cout << "Enter the target " << endl;
    cin >> sum;

    int i,j;
    i = j = 0;

    subArray(v,sum,i,j);





}