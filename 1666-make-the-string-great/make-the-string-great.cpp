class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char i:s){
            if(!st.empty()){
                if((i>='A'&& i<='Z') && st.top()-32==i || i==st.top()+32  ){
                    st.pop();
                }else{
                    st.push(i);
                }
            }else{
                st.push(i);
            }
        }string b="";
        while(!st.empty()){
          char c=st.top();
          b.push_back(c);
          st.pop();
        }reverse(b.begin(),b.end());
        return b;
    }
};