#include <iostream>
using namespace std;

void update(int *p) {
   *p = *p * 2;
}

int main() {
    int i = 2;
    update(&i);

    cout << i << endl;
}

