class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
       int  push=0,pop=0;
       while(push<pushed.size())
       {
        s.push(pushed[push]);
        while(!s.empty()&&s.top()==popped[pop])
        {
            ++pop;
            s.pop();
        }
        push++;
       }
       if(pop==popped.size())
       {
           return true;
       }
       else
       {
           return false;
       }
    }
};