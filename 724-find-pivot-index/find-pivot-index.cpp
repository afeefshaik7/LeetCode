class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
           s=s+nums[i];
           nums[i]=s;
        }int g=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++)
        {
           if(i==0){
              int b=g-nums[i];
              if(b==0)return 0;
           }else{
             int f=g-nums[i];
             if(f==nums[i-1])return i;
           }
        }return -1;
    }
};