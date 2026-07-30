class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;

        // Hash Set will remove duplicated numbers in array
        // so iterate from hash set can reduce time
        for (auto n: set)
        {
            int len = 0;
            // if n-1 is not in set, then it is the begining of seq
            while (set.find(n + len) != set.end())
            {
                len++;
            }

            longest = max(longest, len);
        }
        return longest;
    }
};
