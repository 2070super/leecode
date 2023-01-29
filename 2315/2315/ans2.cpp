#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int countAsterisks(string s) {
        int cont = 0, ans = 0;
        for (auto i : s)
        {
            if (i == '|')
            {
                cont++;
            }
            else if (cont % 2 == 0 && i == '*')
            {
                ans++;
            }
        }
        return ans;
    }
};