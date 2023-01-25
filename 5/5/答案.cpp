#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string res = "";
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;
        for (int i = 0; i < s.size(); i++) {
            // 回文子串长度是奇数
            expandAroundCenter(s, i, i);
            // 回文子串长度是偶数
            expandAroundCenter(s, i, i + 1);
        }
        return res;
    }

    void expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // 注意此处left,right的值循环完后  是恰好不满足循环条件的时刻
        // 此时left到right的距离为right-left+1，但是left right两个边界不能取 所以应该取left+1到right-1的区间  长度是right-left-1
        if (right - left - 1 > res.size()) {  //s.substr(pos,n) 从位置pos开始，截取n个元素
            res = s.substr(left + 1, right - left - 1);  // 子串也要取[left+1,right-1]这个区间,即从left+1位置开始，截取right-left-1个元素
        }
    }

};
