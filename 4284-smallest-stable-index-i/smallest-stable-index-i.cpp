class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            int mx=INT_MIN;
            int mn=INT_MAX;
            for(int j=0;j<=i;j++)
            {
               if(nums[j]>mx)
               {
                mx=nums[j];
               }
            }
            for(int k=i;k<nums.size();k++)
            {
                if(nums[k]<mn)
                {
                  mn=nums[k];
                }
            }
            if((mx-mn)<=k){
                return i;
            }
        }
        return -1;
    }
};