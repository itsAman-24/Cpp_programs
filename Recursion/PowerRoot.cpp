#include <iostream>
using namespace std;

int powerRoot(int n) {
    if(n == 0) {
    return 1;
    }

    
    // int smallerproblem = powerRoot(n-1);
    // int biggerproblem = 2 * smallerproblem;
    

    return 2 * powerRoot(n-1);

   
}

int main() {
   
   int n;
   cout << "Enter the number" << endl;
   cin >> n;

   cout <<"The Power is " << powerRoot(n);

}
