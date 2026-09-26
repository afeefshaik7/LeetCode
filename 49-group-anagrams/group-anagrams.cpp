class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v;
        for(auto i:strs)
        {
            sort(i.begin(),i.end());
            v.push_back(i);
        }
        vector<vector<string>>ve;
        map<vector<string>,int>m;
        for(int i=0;i<v.size();i++)
        {
            vector<string>s;
            for(int j=0;j<v.size();j++)
            {
                if(v[i]==v[j])s.push_back(strs[j]);
            }m[s]++;
        }
        for(auto i:m)ve.push_back(i.first);
        return ve;
    }
};