#include <iostream>

using namespace std;

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    // int small = fact(n-1);
    // int big = n * small;

    // return big;

    return n * fact(n-1);  // just placing the small problem at its place and big problem at its place in return statement

}

int main() {
    
    int num;
    cout << "Enter the value of num: " << endl;
    cin >> num;

    cout << "The factorial of " << num << " is " << fact(num);
}