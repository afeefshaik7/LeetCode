class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>v(code.size(),0);
        vector<int>d;
        if(k==0)
        {
           return v;
        }
        else if(k>0)
        {
            int first=0;
           for(int i=1;i<=k;i++)
           {
            first=first+code[i];
           }
           d.push_back(first);
           for(int i=1;i<code.size();i++)
           {
            first=first-code[i]+code[(i+k)%code.size()];
            d.push_back(first);
           }
        }
        else{
            int f=code.size()+k;int mx=0;
           for(int i=code.size()-1;i>=f;i--)
           {
             mx=mx+code[i];
           }
           d.push_back(mx);
           for(int i=1;i<code.size();i++)
           {
            mx=mx+code[i-1]-code[f%code.size()];
            d.push_back(mx);
            f++;
           }
           }
 return d;
    }
};