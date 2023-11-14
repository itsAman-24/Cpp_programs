#include <iostream>
#include <vector>
using namespace std;


    void findSet(vector<int> nums, vector<int> output, int index,vector<vector<int> > &ans ) {
        //Base case 
        if(index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        //Excluding elements 

        findSet(nums,output,index+1,ans);

        //Including elements 
        int element = nums[index];
        output.push_back(element);
        findSet(nums,output,index+1,ans);
    }


    vector<vector<int> > subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        findSet(nums,output,index,ans);
        
        for(int i = 0; i < 7; i++) {
           for(int j = 0; j < 7; j++) {
               cout << ans[i][j] << " ";
        }
    }

        
   }


int main() {

    vector<int> nums = {1,2,3,4};
    subsets(nums);

    // for(int i = 0; i < 7; i++) {
    //     for(int j = 0; j < 7; j++) {
    //         cout << ans[i][j] << " ";
    //     }
    // }
    
}