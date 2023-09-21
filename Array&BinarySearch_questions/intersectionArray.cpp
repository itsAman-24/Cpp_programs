#include <iostream>
using namespace std;

int findIntersection(int arr1[], int arr2[],int m ,int n)
{
  int i = 0;
  int j = 0;

  while (i < m  && j < n )
  {
    if (arr1[i] == arr2[j])
    {

      cout << arr2[j] << endl;
      i++;
      j++;
    }

    else if (arr1[i] < arr2[j])
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
  
  int m;
  
  int arr1[100];
  int arr2[100];
  cout << "Enter the size of 1st array" << endl;
  cin >> m;

  cout<<"Reminder...Your both arrays should be in non-decreasing sorted order"<<endl;

  cout << "Enter the element in 1st array" << endl;

  for (int i = 0; i < m; i++)
  {
    cin >> arr1[i];
  }

  int n;

  cout << "Enter the size of 2nd array" << endl;
  cin >> n;
  cout << "Enter the element in 2nd array" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr2[i];
  }
  
  cout<<"Intersection in the array is:"<<endl;
  findIntersection(arr1, arr2,m,n);

  return 0;
}