#include<iostream>
#include<string>
using namespace std;
class Solution {
public: 
    int myAtoi(string s) {
        while (s[0] == ' ')
        {
            s.erase(0, 1);
        }
        long long ans = 0;
        int flag = 0;
        bool sub = 0;
        if (s[0] == '-')
        {
            flag = 1;
            sub = true;
            s.erase(0, 1);
        }
        if (s[0] == '+' && sub != true)
        {
            sub = 1;
            s.erase(0, 1);
        }
        while(s[0]!='\0')
        {
            if ((s[0] != '+') && (s[0] > '9' || s[0] < '0'))
            {
                break;
            }
            if ((s[0] == '+' || s[0] == '-') && sub == true)
            {
                break;
            }
            int a = s[0] - '0';
            ans = ans*10 + a;
            sub = 1;
            s.erase(0, 1);
            if (ans >= (pow(2, 31) - 1) && flag == 0)
            {
                ans = pow(2, 31) - 1;
                break;
            }
            if (ans >= pow(2, 31) && flag == 1)
            {
                ans = pow(2, 31);
                break;
            }
        }
        if (flag == 1)
        {
            ans *= (-1);
        }
        return ans;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution solution;
    int r = solution.myAtoi(s);
    cout << r << endl;
    

}
