#include <iostream>
using namespace std;

void sayDigits(int n, string arr[]) {
    if(n == 0) 
       return ;

    int digit = n % 10;
    n = n / 10;

    // cout << arr[digit] << " ";


    sayDigits(n, arr);

    cout << arr[digit] << " ";
    
}

int main() {
    string arr[10] = { "Zero" , "one" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" };
    int num;
    cout << "Enter the number - > " << endl;
    cin >> num;

    sayDigits(num , arr);

}