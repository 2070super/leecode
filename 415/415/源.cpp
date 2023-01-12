#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num1, num2;
    cin >> num1;
    cin >> num2;
    string ret;
    int end1 = num1.size()-1;
    int end2 = num2.size()-1;
    int next = 0;
    while (end1 >= 0 || end2 >= 0)
    {
        int x1 = 0, x2 = 0;
        if (end1 >= 0)
        {
            x1 = num1[end1] - '0';
            --end1;
        }
        if (end2 >= 0)
        {
            x2 = num2[end2] - '0';
            --end2;
        }
        char r = x1 + x2 + next;
        if (r >= 10)
        {
            r -= 10;
            next = 1;
        }
        else
        {
            next = 0;
        }
        ret += (r + '0');

    }
    if (next == 1)
    {
        ret += '1';
    }
    reverse(ret.begin(), ret.end());
    cout << ret << endl;
}