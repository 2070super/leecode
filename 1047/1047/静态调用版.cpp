#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    static string removeDuplicates(string s)
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
    cin >> a;
    cout << Solution::removeDuplicates(a) << endl;
}