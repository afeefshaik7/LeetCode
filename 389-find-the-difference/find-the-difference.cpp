class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char a;int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[i])
            {
                c++;
            }else{
                return t[i];
            }
        }
        if(c==s.size())return t[t.size()-1];
        return a;
    }
};