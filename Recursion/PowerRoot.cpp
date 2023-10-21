#include <iostream>
using namespace std;

int powerRoot(int n) {

    cout << "Here call is for: " << n << endl;

    if(n == 0) {
    return 1;
    }

    
    // int smallerproblem = powerRoot(n-1);
    // int biggerproblem = 2 * smallerproblem;

    

    return 2 * 2 * powerRoot(n/2);

   
}

int main() {
   
   int n;
   cout << "Enter how many times you want to multiply two-> " << endl;
   cin >> n;
   
   cout << endl;
   cout <<"The Answer is-> " << powerRoot(n);

}
