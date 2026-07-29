class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string ret = "";
        ret += -1;
        for (auto str: strs)
        {
            ret += str;
            ret += -1;
        }

        //std::cout << ret << std::endl;
        return ret;
    }

    vector<string> decode(string s) 
    {
        vector<string> ret;
        string substr;
        for (auto c: s)
        {
            if (c == -1)
            {
                std::cout << substr << std::endl;
                ret.push_back(substr);
                substr = "";
            }
            else
            {
                substr.push_back(c);
            }
            
            
        }

        ret.erase(ret.begin());
        return ret;
    }
};
