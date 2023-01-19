#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    static string intToRoman(int num) {

        string s;
        string roma[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
        int  nums[] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
        for (int i = 12; i >= 0; i--)
        {
            while (nums[i] <= num)
            {
                num -= nums[i];
                s += roma[i];
            }
        }
        return s;
    }

};
int main()
{
    int s;
    cin >> s;
    cout << Solution::intToRoman(s) << endl;
}