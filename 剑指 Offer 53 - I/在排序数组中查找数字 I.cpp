class Solution {
public:
    int search(vector<int>& nums, int target) {
         int res = 0;
        for(int x : nums){
            if(x == target){
                res ++;
            }
        }
        return res;


    }
};
