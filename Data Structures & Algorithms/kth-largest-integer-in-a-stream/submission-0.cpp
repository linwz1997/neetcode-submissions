class KthLargest 
{
private:
    int K;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    KthLargest(int k, vector<int>& nums) 
    {
        K = k;

        for (auto n: nums)
        {
            add(n);
        }  
    }
    
    int add(int val) 
    {
        minHeap.push(val);

        if (minHeap.size() > K)
        {
            minHeap.pop();
        }    

        return minHeap.top();
    }
};
