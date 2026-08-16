class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c=1;int k=0;
      for(int i=0;i<nums.size()-1;i++)
      {
        if(nums[i]<nums[i+1])
        {
            c++;
        }else{
            k=max(k,c);
            c=1;
        }
      }k=max(k,c);
       return k;
    }
};