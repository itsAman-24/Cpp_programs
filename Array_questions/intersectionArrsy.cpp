#include <iostream>
using namespace std;

int findIntersection(int arr1[],int arr2[])
{
  int i = 0;
  int j = 0;

while(i<6 && j<4)
{
  if(arr1[i] == arr2[j])
  {
    
    cout<<j<<endl;
    i++;
    j++;
  }

  else if(arr1[i] < arr2[j])
  {
    i++;
  }

  else
  {
    j++;
  }
  
}
  
}

int main()
{
  int arr1[6] = {1,2,2,2,3,4};
  int arr2[4] = {2,2,3,5};

  findIntersection(arr1,arr2);




}