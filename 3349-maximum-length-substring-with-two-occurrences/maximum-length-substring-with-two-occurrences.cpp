class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0;map<char,int>m;int mx=INT_MIN;int c=0;
        for(int right=0;right<s.size();right++)
        {
            m[s[right]]++;
            c++;
            for(auto &i:m)
            {
                while(i.second>=3)
                {
                   m[s[left]]--;
                   left++;
                   c--;
                }
            }
            mx=max(c,mx);
        }return mx;
    }
};