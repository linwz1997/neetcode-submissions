class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            // 以comp作為key 檢查該值在map中的key數量
            // 因為hash map的key不可能重複存在，故
            // count值為0->沒有這個key
            // count值為1->有這個key
            if (map.count(comp))
            {
                return {map[comp], i};
            }

            // 把現在這個值作為key存入map
            // 代表這個值已經看過了 
            // 其他陣列元素計算完comp 再去hash map查
            // 就可以快速得知他的comp是否有被遍歷過
            map[nums[i]] = i;
        }

        // 答案保證有解 因此不會跑到這邊
        return {};
    }
};
