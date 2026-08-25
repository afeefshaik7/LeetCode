class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;int prod=1;int c=0;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]!=0)
          {
            prod=prod*nums[i];
          }else{
            c++;
          }
        }if(c==1){
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                v.push_back(prod);
            }else
            v.push_back(0);
        }
        }else if(c>1)
        {
            for(int i=0;i<nums.size();i++)v.push_back(0);
        }
        else{
            for(int i=0;i<nums.size();i++)
            {
                v.push_back(prod/nums[i]);
            }
        }
        return v;
    }
};