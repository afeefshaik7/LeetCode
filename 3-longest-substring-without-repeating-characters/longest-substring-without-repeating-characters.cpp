class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        map<char,int>m;int c=0;int mx=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            c++;
           while(c>m.size()){
            m[s[left]]--;
            if(m[s[left]]==0)
            {
            m.erase(s[left]);
            }c=c-1;
            left++;
           }int ans=i-left+1;
           mx=max(ans,mx);
        }return mx;
    }
};