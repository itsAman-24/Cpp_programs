#include <iostream>
using namespace std;

int fibo(int n) {
    if(n == 1 || n == 0) {
        return n;
    }
    
    else
    return ( (fibo(n-1)) + (fibo(n-2)) );

}


int main() {
    int num ;
    cout << "Enter the number " << endl;
    cin >> num;

   cout << fibo(num) << " ";
}