class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        if (nums.size() < 2)
        {
            return false;
        }
        unordered_map<int, int> map;
        map.insert({nums[0], true});

        for (int i = 1; i < nums.size(); i++)
        {
            if (map.contains(nums[i]))
            {
                return true;
            }
            map.insert({nums[i], true});
        } 

        return false;
    }
};