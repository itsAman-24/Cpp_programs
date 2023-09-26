#include <bits/stdc++.h>
using namespace std;

int primeCount(int n) {
    vector<bool> prime(n+1,true);

    int count = 0;
    prime[0] = prime[1] =false;

    for(int i = 2; i < n; i++) {

         if(prime[i]) {
            count++;

            for(int j = 2*i; j < n; j=j+i) {
                prime[j] = 0;
            }
         }

    }

    return count;

}

int main() {
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

   cout <<"There are " << primeCount(num) << " prime numbers between 0 and " << num << endl;
}