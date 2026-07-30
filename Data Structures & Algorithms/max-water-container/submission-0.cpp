class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int maxAmount = 0;
        int i = 0;
        int j = heights.size() - 1;
        while (i < j)
        {
            int amount = min(heights[i], heights[j]) * (j - i);
            if (heights[i] < heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            maxAmount = max(maxAmount, amount);
        }

        return maxAmount;
    }
};
