#include <iostream>
using namespace std;

int update(int **ptr2) {

    ptr2 = ptr2 + 1;
    // Kuch change hoga ?  NHI hoga

   // *ptr2 = *ptr2 + 1;
    // Kuch change hoga ?  YES hoga ( ptr k address me hoga )

     //**ptr2 = **ptr2 + 1;
    // Kuch change hoga ?  YES hoga ( i ki value me hoga )

   
}


int main() {
    int i = 5;
    int *ptr = &i;

    int **ptr2 = &ptr;      // double pointer holds the address of another pointer

    // cout <<"Address of ptr-> " << &ptr << endl;
    // cout <<"Address in ptr-> " << ptr << endl << endl;

    // cout <<"Address of ptr2-> " << &ptr2 << endl;
    // cout <<"Address in ptr2-> " << ptr2 << endl << endl;

    // cout << *ptr << endl;
    // cout << (*ptr2) + 1 << endl;
    // cout << **ptr2 << endl << endl;

    // cout << endl << "Printing value of i by different ways: " << endl;
    // cout << i << endl;
    // cout << *ptr << endl;
    // cout << **ptr2 << endl; 

    // cout << endl << "Printing the address of i by different ways: " << endl;
    // cout << &i << endl;
    // cout << ptr << endl;
    // cout << *ptr2 << endl;

    cout << "Before" << endl << endl;
    cout <<"i ki value " << i << endl;
    cout <<"ptr ke andr address " <<  ptr << endl;
    cout <<"ptr2 ke andr address " << ptr2 << endl << endl; 

    update(ptr2);

    cout << "After" << endl << endl;
   cout <<"i ki value " << i << endl;
    cout <<"ptr ke andr address " <<  ptr << endl;
    cout <<"ptr2 ke andr address " << ptr2 << endl << endl; 
    



   
    
   

    



}