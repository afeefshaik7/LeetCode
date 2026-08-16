class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()>t.size() ||t.size()>s.size()) return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[i])
            {
                c++;
            }
        }if(c==s.size()) return 1;
        else return 0;
    }
};