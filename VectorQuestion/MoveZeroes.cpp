#include <iostream> 
#include <vector>
using namespace std;

 vector <int> moveZero(vector <int> &v) {

    int nonZero = 0;   //Nonzero number will be started at very first index
    for(int j = 0; j < v.size(); j++) {
        if(v[j] != 0) {
            swap(v[j], v[nonZero]);
            nonZero++;
        }
    }

    for(int i =0; i < v.size(); i++) {
        cout << v[i] <<" ";
    }

}


int main() {
    vector <int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(0);
    
    moveZero(v);


    return 0;
}