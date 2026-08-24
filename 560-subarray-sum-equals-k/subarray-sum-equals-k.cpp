class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int c=0;
    int prefix=0;map<int,int>m;
    for(int i=0;i<nums.size();i++)
    {
     m[prefix]++;
     prefix=prefix+nums[i];
     int b=prefix-k;
     if(m.find(b)!=m.end())
    {
        c=c+m[b];
    }
    }   
    return c;
    }
};