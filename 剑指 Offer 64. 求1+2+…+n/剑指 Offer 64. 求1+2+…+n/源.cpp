#include<iostream>
using namespace std;
class sum
{ 
    friend class Solution;
public:
    sum()
    {
        _ret += _i;
        ++_i;
    }
    static int getsum()
    {
        return _ret;
    }
private:
    static int _i;
    static int _ret;
};
int sum::_i = 1;
int sum::_ret = 0;
class Solution {
public:
    int sumNums(int n) {
        sum::_i = 1;
        sum::_ret = 0;
        sum*p=new sum[n];
        return sum::getsum();
    }
};
int main()
{
    int a;
    cin >> a;
    Solution s;
    cout << s.sumNums(a) << endl;
}