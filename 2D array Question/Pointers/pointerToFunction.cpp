#include <iostream>
using namespace std;

int update(int *p) {
    p = p + 1 ;
    // *p = *p + 1;

    // cout << "Inside" << p << endl;
}

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;

}

int main() {
//     int i = 3;
//     int *p = &i;
//    cout << p << endl;
//    update(p);
//    cout << p << endl;

   int array[6] = {1,2,3,4,6,7};
   cout <<"Sum is -> " << getSum(array+3,3);



}

