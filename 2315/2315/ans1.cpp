#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int countAsterisks(string s) {
        int flag = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|' && flag == 0)
            {
                flag = 1;
                continue;
            }
            if (s[i] == '|' && flag == 1)
            {
                flag = 0;
                continue;
            }
            if (s[i] == '*' && flag == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};