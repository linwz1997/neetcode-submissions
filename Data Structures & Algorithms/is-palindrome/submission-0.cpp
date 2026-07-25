class Solution {
public:
    bool isCapAlpha(char c)
    {
        return 'A' <= c && c <= 'Z';
    }

    bool isAlpha(char c)
    {
        return isCapAlpha(c) || ('a' <= c && c <= 'z');
    }

    bool isAlphaNum(char c)
    {
        return isAlpha(c) || ('0' <= c && c <= '9');
    }

    char lower(char c)
    {
        return c + 'a' - 'A';
    }

    bool isPalindrome(string s) 
    {
        int i = 0;
        int j = s.size() - 1;

        while (i < j)
        {
            while (i < j && !isAlphaNum(s[i]))
            {
                i++;
            }
            while (i < j && !isAlphaNum(s[j]))
            {
                j--;
            }

            if (isCapAlpha(s[i]))
            {
                s[i] = lower(s[i]);
            }

            if (isCapAlpha(s[j]))
            {
                s[j] = lower(s[j]);
            }

            if (s[i] != s[j])
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};