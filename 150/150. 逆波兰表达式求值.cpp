class Solution {
public
    int evalRPN(vectorstring& tokens) {
        stackint s;
        for (size_t i = 0; i  tokens.size(); ++i)
        {
            string str=tokens[i];
            if (!(+ == str  - == str   == str   == str))
            {
                s.push(atoi(str.c_str()));
            }
            else
            {
                int right = s.top();
                s.pop();
                int left = s.top();
                s.pop();
                switch(str[0])
                {
                    case '+'
                        s.push(left + right);
                        break;
                    case '-'
                        s.push(left - right);
                        break;
                    case ''
                        s.push(left  right);
                        break;
                    case ''
                    s.push(left  right);
                    break;

                }
            }

        }
        return s.top();
    }
};