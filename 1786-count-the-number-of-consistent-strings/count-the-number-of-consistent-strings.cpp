class Solution {
public:
    int countConsistentStrings(string al, vector<string>& words) {
        map<char,int>m;
         for(int i=0;i<al.size();i++)
        {
            m[al[i]]++;
        }int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            map<char,int>mp;
            for(int j=0;j<words[i].size();j++)
            {
                mp[words[i][j]]++;
            }
            if(mp.size()==m.size())
            {
                int f=0;
                for(auto i:m)
                {
                    char b=i.first;
                    auto it=mp.find(b);
                    if(it!=mp.end())
                    {
                        f++;
                    }
                }
                if(f==m.size())cnt++;
            }else if(m.size()>mp.size())
            {
                int f=0;
                for(auto i:mp)
                {
                    char b=i.first;
                    auto it=m.find(b);
                    if(it!=m.end())
                    {
                        f++;
                    }
                }
                if(f==mp.size())cnt++; 
            }
        }return cnt;
    }
};