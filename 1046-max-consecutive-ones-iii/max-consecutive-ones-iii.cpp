class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int c=0;int mx=INT_MIN;
        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]==0)
            {
                c++;
            }
            while(c>k)
            {
              if(nums[left]==0)
              {
                c=c-1;
              }
              left++;
            }
             int ans=right-left+1;
             mx=max(ans,mx);
        }return mx;
    }
};