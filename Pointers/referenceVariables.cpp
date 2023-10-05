#include <iostream>
using namespace std;

void update1(int &num) {
    num = num * 2;
}
 
/*This is how to return a reference variable from a function but it is a very bad practice as the scope of the simple variable as well as
  reference variable will end after the ending of the function then how can we return reference variable when its scope is only inside that
  function */

int &update2(int n) {
    int i = n;
    int &ref = i;

    return ref;
}

/*Same sort of thing is also happening here is that we are returning pointer by a function but we know that the scope will end after the 
  function ending so this is also an bad practice */

int *ptr(int n) {
    int i = n;
    int *pt = &i;
    return pt;
}

int main() {
    int n = 3;
    cout << "Before " << n << endl;
    update2(n);
    ptr(n);
    cout << "After " << n << endl;

    
}