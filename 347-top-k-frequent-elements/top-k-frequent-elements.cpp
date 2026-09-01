class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;vector<int>v;
        for(auto i:nums)
        {
            m[i]++;
        }
        multimap<int,int,greater<int>>freq;
        for(auto i:m)
        {
            freq.insert({i.second,i.first});
        }int c=0;
        for(auto i:freq)
        {
          v.push_back(i.second);
          c++;
          if(c==k)break;
        }return v;
    }
};