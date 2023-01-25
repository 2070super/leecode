#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
	string longestPalindrome(string s) {
		if (s.size() < 2)
		{
			return s;
		}
		string ans = {};
			for (int i = 0; i < s.size(); i++)
			{
				int size = 0;
				int left = i, right = i;
				while (left >= 0 && right < s.size() && s[left] == s[right])
				{
					left--;
					right++;
				}
				if (right - left - 1 > ans.size()) 
				{
					ans = s.substr(left + 1, right - left - 1); 
				}
			
		
				 size = 0;
				 left = i, right = i+1;
					while (left >= 0 && right < s.size() && s[left ] == s[right])
					{
						left--;
						right++;
					}
					if (right - left - 1 > ans.size()) 
					{  
						ans = s.substr(left + 1, right - left - 1); 
					}
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
