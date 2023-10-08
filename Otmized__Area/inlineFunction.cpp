#include <iostream>
using namespace std;

inline int func(int& n) {
    int a = 3 * n;
    return a;
}
int main() {
    int num = 4;

    int test = func(num);
    cout <<"Ho gya bhai dhyaan do pdhae pr" << test << endl;

}
