#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int total = 0;
        for (auto e : nums)
        {
            total ^= e;
        }
        int index = 1;
        while (((total & index) == 0)) 
        {
            index <<= 1;
        }
           int a1=0;
           int a2 = 0;
            for (auto num: nums) {
                if (index&num) {
                    a1^= num;
                }
                else {
                    a2^= num;
                }
            }
            return{a1,a2 };

        }
    };