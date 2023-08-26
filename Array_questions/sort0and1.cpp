#include <iostream>
using namespace std;

void sortArray(int array[],int n)
{
  int i = 0;
  int j = n-1;

  while(i < j)
  {
      if(array[i]==0)
      {
         i++;
      }

      else if(array[j]==1)
      {
         j--;
      }
      
      else if(array[i]==1 && array[j]==0)
      {
         swap(array[i] , array[j]);
         i++;
         j--;
      }

      }

  for(int i = 0; i < n; i++)
  {
    cout<<array[i]<<" ";
  }

}

int main()
{
    int arr[8] = {0,1,1,0,1,0,1,0};
    sortArray(arr,8);

}
