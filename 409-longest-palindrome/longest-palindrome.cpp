class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;vector<int>v;
        if(s.size()==1) return 1;
          for(auto i:s)
          {
            m[i]++;
          }int c=0;int d=0;
          for(auto i:m)
          {
            if(i.second%2!=0)
            {
              c=c+i.second-1;
              d++;
            }else{
                c=c+i.second;
            }
          }if(d>0)
          return c+1;
          return c;
    }
};