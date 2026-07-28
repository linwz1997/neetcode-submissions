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
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k)
            {
                if (nums[j] + nums[k] == -nums[i])
                {
                    ret.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    //Prevent from such case:
                    //[-2, -2, 0, 0, 2, 2]
                    //  i      j        k
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }
                }
                if (nums[j] + nums[k] < -nums[i])
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return ret;
    }
};
