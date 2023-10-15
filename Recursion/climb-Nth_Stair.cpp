#include <iostream> 
using namespace std;

//QUESTION FROM LECTURE -> 32  Time 36:00

int wayToReachNthStair(int num) {
    if(num < 0) {
        return 0;
    }

    if(num == 0) {
        return 1;
    }

    else 
    return ( (wayToReachNthStair(num - 1)) + (wayToReachNthStair(num - 2)) );
}

int main() {
    int num;
    cout << "Enter your destination " << endl;
    cin >> num;

   cout << wayToReachNthStair(num);
}