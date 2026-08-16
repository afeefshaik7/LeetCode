class Solution {
public:
    int totalFruit(vector<int>& f) {
        map<int,int>m;
        int l=0;int mx=INT_MIN;int c=0;
        for(int r=0;r<f.size();r++)
        {
          m[f[r]]++;
          if(m.size()>2)
          {
            while(m.size()!=2)
            {
                m[f[l]]--;
                if(m[f[l]]==0)m.erase(f[l]);
                l++;
            }
          }
           c=r-l+1;
          if(mx<c)
          {
            mx=c;
          }
        }return mx;
    }
};