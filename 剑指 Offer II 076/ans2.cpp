class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> p(nums.begin(), nums.begin() + k);//Ĭ���ǹ�����ѣ�������ҪС��
        for (size_t i = k; i < nums.size(); ++i)
        {
            if (nums[i] > p.top())
            {
                if (nums[i] > p.top())
                {
                    p.pop();
                    p.push(nums[i]);
                }
            }
        }
        return p.top();
    }
};