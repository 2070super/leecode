#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int n = brackets.size(), t = 0;
        double s = 0;
        for (auto& b : brackets)
            if (income <= b[0]) {
                s += (income - t) * b[1] * 1.0 / 100;
                break;
            }
            else {
                s += (b[0] - t) * b[1] * 1.0 / 100;
                t = b[0];
            }
        return s;
    }
};
int main()
{
    vector<int> s;
    int word;
   while (cin >> word)
    {
        s.push_back(word);
        if (cin.get() == '\n')
        break;
    }
   int income;
   cin >> income;
   Solution ss;
   cout << ss.calculateTax(s, income) << endl;
}