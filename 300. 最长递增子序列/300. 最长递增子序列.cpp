class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    v[i]=max(v[j]+1,v[i]);
                }
            }
        }
        int max=0;
        for(int i=0;i<v.size();i++)
        {
            if(max<v[i])
            {
                max=v[i];
            }
        }
        return max;
    }
};