class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }int cnt=0;
        for(auto i:t)
        {
            auto it=m.find(i);
            if(it!=m.end())
            {
              if(m[i]<=0)
              {
                cnt++;
              }
              m[i]--;
            }else{
                cnt++;
            }
        }return cnt;
    }
};