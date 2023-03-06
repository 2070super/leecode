class Solution {
public:
    int minimumDeletions(string s) {
        int cont=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                cont++;
            }
        }
        int min=cont;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                cont--;
            }
            else
            {
                cont++;
            }
            if(min>cont)
            {
                min=cont;
            }
        }
         return min;
    }
   
};