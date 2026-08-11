class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                v.push_back(nums[i]);
            }else
            break;
        }int sum=0;
        for(int i=0;i<v.size();i++)
        {
          sum=sum+v[i];
        }
        for(int i=sum;i<INT_MAX;i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i==nums[j])
                {
                    c++;
                }
            }
            if(c==0) return i;
        }
        return sum;
    }
};