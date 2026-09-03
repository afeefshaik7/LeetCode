class Solution {
public:
    int maxConsecutiveAnswers(string nums, int k) {
        int left=0;int c=0;int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]=='F')
            {
                c++;
            }
            if(c>k)
            {
               while(nums[left]!='F')
               {
                left++;
               }
               left++;
                c--;
            }
            mx=max(mx,i-left+1);
        }c=0;left=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]=='T')
            {
                c++;
            }
            if(c>k)
            {
               while(nums[left]!='T')
               {
                left++;
               }
               left++;
                c--;
            }
            mx=max(mx,i-left+1);
        }
        return mx;
    }
};