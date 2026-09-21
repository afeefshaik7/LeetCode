class Solution {
public:
    bool isValid(string s) {
        stack<char>c;
        if(s[0]==')'||s[0]=='}'||s[0]==']')
        {
            return false;
        }else{
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                c.push(s[i]);
            }else{
                if(!c.empty()){
             if(s[i]==')')
            {
                if(c.top()!='(')
                {
                    break;
                }else
                c.pop();
            }
            else if(s[i]=='}')
            {
                if(c.top()!='{')
                {
                    break;
                }else
                c.pop();
            }
            else if(s[i]==']')
            {
                if(c.top()!='[')
                {
                    break;
                }else
              c.pop();
            }
        }else{
            c.push(s[i]);
            break;
        }
        }
    }}if(c.size()==0)
    return 1;
    else
    return 0;
    }
};