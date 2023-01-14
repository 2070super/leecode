#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
      string removeDuplicates(string s)
    {
        string ans = { 0 };
        for (char a : s)
        {
            if (!ans.empty() && ans.back() == a)
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(a);
            }
        }
        return ans;
    }

};

int main()
{
    string a;
    Solution solution;
    cin >> a;
    cout << solution.removeDuplicates(a) << endl;
}