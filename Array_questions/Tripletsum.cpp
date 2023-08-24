#include <iostream>
using namespace std;

bool tripletSum(int array[], int size , int target){
    for(int i = 0; i < size; i++){

        for(int j = i+1; j < size; j++){

            for(int k = j+1; k < size; k++){

                  if(array[i]+array[j]+array[k] == target){

                      cout<<array[i]<<"  "<<array[j]<<"  "<<array[k]<<endl;
                      return 1;
                  }
            }
        }
    }

    return 0;

}

int main(){
   int size;
   cout<<"Enter the size"<<endl;
   cin>>size;
   int arr[size];
   int target;
   cout<<"Enter the target"<<endl;
   cin>>target;
   
   cout<<"Enter the elements in your array"<<endl;
   for(int i = 0; i < size; i++){

      cin>>arr[i];

   }

   bool get = tripletSum(arr,size,target);

   if(get){

      cout<<"Congo.. target found"<<endl;
   }
   else{
      cout<<"Target not found"<<endl;
   }

}