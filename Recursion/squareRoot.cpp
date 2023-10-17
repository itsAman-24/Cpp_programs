#include <iostream>
using namespace std;

int power(int a, int b) {          //function to calculate a^b (A to the power B)

    if(b == 0) {     // because 2^0 = 1
        return 1;
    }

    if(b == 1) {    // because 2^1 = 2
        return a;
    }

    int ans = power(a, b/2);   // if we have 2^4 then here we are only calculating 2^2 and storing it to ans variable

    if(b%2 == 0) {      
        // b is even number
        return ans * ans;       // returning the 2^2 * 2^2  (which will combinaly return 2^4 )
    }

    else {
        //b is odd
        return a * ans * ans;  // returning the 2^2 * 2^2 * 2 (which will combinaly return 2^5 )
    }
}

int main() {
    int a , b;
    cout << "Enter the value of a and b -> " << endl;
    cin >> a >> b;

    int ans = power(a,b);

    cout << "The power is-> " << ans << endl;
}