class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> prefix(nums.size(), 1);
        vector<int> postfix(nums.size(), 1);

        for (int i = 0; i < nums.size() - 1; i++)
        {
            prefix[i + 1] = prefix[i] * nums[i];
        }

        for (int i = nums.size() - 1; i > 0; i--)
        {
            postfix[i - 1] = postfix[i] * nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            prefix[i] *= postfix[i];
        }

        return prefix;
    }
};
