#include <stdio.h>

int main ()
{
  int a, b;
  printf ("Enter the value of a and b ");
  scanf ("%d", &a);
  scanf ("%d", &b);
  
  
  int c;
  printf("Enter 1 for add\n");
  printf("Enter 2 for sub\n");
  scanf("%d" , &c);
  
  if(c  == 1) {
   printf("sum = %d ", a+b);   
  }
  
  else if(c  == 2) {
      printf("sub = %d ", a-b);
      
  }
  
}

// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cout << "Enter a and b " << endl;
//     cin >> a >> b;

//     int c;
//     cout << "Enter 1 for add" << endl;
//     cout << "Enter 2 for sub" << endl;
//     cin >> c;

//     if(c == 1) {
//         cout << a+b << endl;
//     }

//     if(c == 2) {
//         cout << a-b << endl;
//     }
// }





