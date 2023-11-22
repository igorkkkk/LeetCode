#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> u_map;
        for(int i = 0; i < nums.size();i++)
        {
            if(u_map.find(target-nums[i])==u_map.end())
                u_map[nums[i]] = i;
            else
                return {u_map[target - nums[i]], i};
        }
        return {0,0};
    }
};