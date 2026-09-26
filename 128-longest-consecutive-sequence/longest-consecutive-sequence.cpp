class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;
        if(nums.size()==0)return 0;
        for(auto i:nums)
        {
            m[i]++;
        }
        vector<int>v;
        for(auto i:m)
        {
            v.push_back(i.first);
        }int cnt=1;int mx=0;
        for(int i=1;i<v.size();i++)
        {
           if(v[i]==v[i-1]+1)
           {
            cnt++;
           }else{
             mx=max(mx,cnt);
             cnt=1;
           }
        }mx=max(cnt,mx);
        return mx;
    }
};