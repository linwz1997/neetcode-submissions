class Solution {
public:
    int binsearch(int m, int n, vector<int>& nums, int target)
    {
        if (m > n)
        {
            return -1;
        }

        int mid = (m + n) / 2;
        //cout << m << ", " << n << ", " << mid << endl;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            return binsearch(m, mid - 1, nums, target);
        }

        return binsearch(mid + 1, n, nums, target);
    }
    int search(vector<int>& nums, int target) 
    {
        int m = 0;
        int n = nums.size() - 1;
        return binsearch(m, n, nums, target);
        
    }
};