class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        if (nums.size() < 3)
        {
            return {};
        }

        vector<vector<int>> ret;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i - 1] == nums[i])
            {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                if (nums[j] + nums[k] > -1 * nums[i])
                {
                    k--;
                }
                else if (nums[j] + nums[k] < -1 * nums[i])
                {
                    j++;
                }
                else
                {
                    ret.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }
                }
            }
            
        }

        return ret;
    }
};
