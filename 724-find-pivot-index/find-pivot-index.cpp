class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++)
        {
            int l=0;
            int r=0;
            for(int j=0;j<nums.size();j++)
            {
               if(j>i)
               {
                r=r+nums[j];
               }else{
                if(i!=j)
                l=l+nums[j];
               }
            }
            if(l==r)return i;
        }return -1;
    }
};