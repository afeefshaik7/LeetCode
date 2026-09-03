class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m;
        for(auto i :s)
        {
           m[i]++;
        }int mx=INT_MIN;
        for(auto i:m)
        {
            int c=0;int left=0;
            for(int j=0;j<s.size();j++)
            {
               if(s[j]!=i.first)
               {
                c++;
               }
                if(c>k)
               {
               while(s[left]==i.first)
               {
                left++;
               }
               left++;
                c--;
               }
            mx=max(mx,j-left+1);
            }
        }return mx;
    }
};