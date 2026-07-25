class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
        {
            return false;
        }

        string count_s(26, 0);
        string count_t(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            count_s[s[i] - 'a']++;
            count_t[t[i] - 'a']++;
        }

        if (count_s.compare(count_t) != 0)
        {
            return false;
        }

        return true;
    }
};
