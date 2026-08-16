class Solution {
public:
    int maxPower(string s) {
        int c=1;int k=0;
        if(s.size()==1)return 1;
        for(int i=1;i<s.size();i++)
        {
           if(s[i]==s[i-1])
           {
            c++;
           }else{
             k=max(c,k);
             c=1;
           }
        }k=max(k,c);
        return k;
    }
};