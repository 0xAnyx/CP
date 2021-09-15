#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size()==0){
            return 0;
        }
        else{
            int count=1;
            sort(nums.begin(),nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                if(nums[i+1]-nums[i]==1){
                count+=1;
            }
        }
        return count;   
        }

    }
};
