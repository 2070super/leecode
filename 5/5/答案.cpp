#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string res = "";
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;
        for (int i = 0; i < s.size(); i++) {
            // �����Ӵ�����������
            expandAroundCenter(s, i, i);
            // �����Ӵ�������ż��
            expandAroundCenter(s, i, i + 1);
        }
        return res;
    }

    void expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        // ע��˴�left,right��ֵѭ�����  ��ǡ�ò�����ѭ��������ʱ��
        // ��ʱleft��right�ľ���Ϊright-left+1������left right�����߽粻��ȡ ����Ӧ��ȡleft+1��right-1������  ������right-left-1
        if (right - left - 1 > res.size()) {  //s.substr(pos,n) ��λ��pos��ʼ����ȡn��Ԫ��
            res = s.substr(left + 1, right - left - 1);  // �Ӵ�ҲҪȡ[left+1,right-1]�������,����left+1λ�ÿ�ʼ����ȡright-left-1��Ԫ��
        }
    }

};
