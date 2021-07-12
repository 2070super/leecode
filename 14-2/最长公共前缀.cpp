class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
        return "";
        sort(strs.begin(),strs.end());
        string str;
        for(int i=0;i<strs[0].size();i++)
        {
            if(strs[0][i] == strs[strs.size()-1][i])
            {
                str += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return str;
    }
};
