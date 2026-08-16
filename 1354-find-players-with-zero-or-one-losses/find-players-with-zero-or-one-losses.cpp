class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        vector<vector<int>>ve;
        sort(m.begin(),m.end());
        vector<int>v;
        vector<int>b;
        for(int i=0;i<m.size();i++)
        {
            v.push_back(m[i][0]);
            b.push_back(m[i][1]);
        }map<int,int>ma;
        for(auto i:b)
        {
            ma[i]++;
        }vector<int>a;
        set<int>s;vector<int>c;
        for(int i=0;i<v.size();i++)
        {
            s.insert(v[i]);
        }
        for(int x:s)
        {
           c.push_back(x);
        }
        for(int i=0;i<b.size();i++)
        {
            c.push_back(b[i]);
            c.push_back(b[i]);
        }
        map<int,int>mw;
        for(auto i:c)
        {
            mw[i]++;
        }
        for(auto i:mw)
        {
            if(i.second==1)
            {
                a.push_back(i.first);
            }
        }ve.push_back(a);
        a={};
        for(auto i:ma)
        {
          if(i.second==1)
          {
            a.push_back(i.first);
          }
        }
        ve.push_back(a);
        return ve;
    }
};