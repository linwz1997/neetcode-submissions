class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        if (nums.size() < 2)
        {
            return false;
        }
        unordered_set<int> map;
        map.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            if (!map.insert(nums[i]).second)
            {
                return true;
            }
        } 

        return false;
    }
};