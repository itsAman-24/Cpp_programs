#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    int small = fact(n-1);
    int big = n * small;

    return big;

}

int main() {
    
    int num;
    cout << "Enter the value of num: " << endl;
    cin >> num;

    cout << fact(num);
}