#include <iostream>
using namespace std;
void update(int &num) {
    num = num * 2;
}
int main() {
    int n = 3;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;
}