#include<iostream>
#include<string>
using namespace std;
    bool is(char s)
    {
        if (s >= 'a' && s <= 'z')
            return true;
        if (s >= 'A' && s <= 'Z')
            return true;

        return false;
    }
    string reverseOnlyLetters(string s) {

        int size = s.size();
        if (size == 0)
        {
            return s;
        }
        size_t begin = 0, end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !is(s[begin]))
            {
                ++begin;
            }
            while (begin < end && !is(s[end]))
            {
                --end;
            }
            swap(s[begin], s[end]);
            --end;
            ++begin;
        }
        return s;
    }
int main()
{
    string s;
    cin >> s;
    string ans;
    cout<<reverseOnlyLetters(s)<<endl;
}