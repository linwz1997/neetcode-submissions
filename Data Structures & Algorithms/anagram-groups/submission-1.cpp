class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        // std::unordered_map (雜湊表 Hash Table)，它的查找複雜度平均是 O(1)
        //std::map 底層是一棵紅黑樹 (Red-Black Tree)，每次插入或查找的時間複雜度是 O(log K)
        unordered_map<string, vector<string>> hashmap;

        // Use const string& 避免複製字串
        for (string &s: strs)
        {
            string count(26, 0);
            for (char c: s)
            {
                count[c - 'a'] += 1;
            }
            hashmap[count].push_back(s);
        }

        for (const auto& [key, values]: hashmap)
        {
            vector<string> subvector;
            for (string s: values)
            {
                subvector.push_back(s);
            }
            res.push_back(std::move(subvector));
        }

        return res;
    }
};