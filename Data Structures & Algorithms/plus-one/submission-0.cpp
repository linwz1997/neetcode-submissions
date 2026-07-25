class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int idx = digits.size() - 1;
        while (idx >= 0)
        {
            if (digits[idx] + 1 > 9)
            {
                digits[idx] = 0;
            }
            else
            {
                digits[idx] += 1;
                break;
            }
            idx--;
        }

        if (idx < 0)
        {
            //printf("idx < 0 but still need to process\n");
            digits.reserve(digits.size() + 1);
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};