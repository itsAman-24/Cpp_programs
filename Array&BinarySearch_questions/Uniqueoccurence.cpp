#include <iostream>
#include <vector>

bool uniqueOccurrences(vector<int> &arr)
}
    unordered_map<int, int> mp;

    // stores the frequency
    for (auto num : arr)
    {
        mp[num]++;
    }

    // check the count and insert in unordered set
    unordered_set<int> set;

    for (auto it : mp)
    {
        int freq = it.second;
        set.insert(freq);
    }

    // if size of mp is equalsize of set then it means all have unique occurance

    return set.size() == mp.size();
    
};

  int main()
  {

  }
