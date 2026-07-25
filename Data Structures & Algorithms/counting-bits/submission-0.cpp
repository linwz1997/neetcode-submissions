class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ret(n + 1, 0);

        for (int i = 0; i <= n; i++)
        {
            int count = 0;
            int val = i;
            while (val)
            {
                val = val & (val - 1);
                count++;
            }
            ret[i] = count;
        }

        return ret;
    }
};
