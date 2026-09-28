class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;int mx=0;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                cnt++;
            }else if(s[i]==')'){
                mx=max(cnt,mx);
                st.pop();
                cnt--;
            }
        }return mx;
    }
};