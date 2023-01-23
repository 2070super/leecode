#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
	string longestPalindrome(string s) {
		string ans = {};
		int max = 0,maxleft=0,maxright=0;
		for (int i = 0; i < s.size(); i++)
		{	
			int left , right ;
				left = i - 1;
				right = i + 1;
				if (i == 0)
				{
					left = 0;
				}
				if(i== s.size()-1)
				{
					right = i;
				}
				if (s[left] == s[right])
				{
					for (;s[right] == s[left] && right != s.size() && left != 0;)
					{
						left--;
						right++;
					}
				}
				 else if (s[i] == s[right])
				{
					left = i;
					while (s[right] == s[left] && right != s.size()-1 && left != 0)
					{
						left--;
						right++;
					}
				}
				 else if (s[left] == s[i])
				{
					right = i;
					while (s[left] == s[right] && left != 0 && right != s.size()-1)
					{
						left--;
						right++;
					}
				}
				int size = right - left;
				if (max < size)
					{
						maxleft = left;
						maxright = right;
					}
		}
		for (int i = maxleft; i <= maxright; i++)
		{
			ans.push_back(s[i]);
		}
		return ans;
	}
};
int main()
{
	string s;
	cin >> s;
	Solution b;
	cout << b.longestPalindrome(s) << endl;
}