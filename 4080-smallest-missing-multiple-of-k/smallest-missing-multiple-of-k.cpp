class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=1;i<=1000;i++)
        {
            if(i%k==0)
           v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(v[i]==nums[j])
                {
                    c++;
                }
            }if(c==0) return v[i];
        }return 1;
    }
};