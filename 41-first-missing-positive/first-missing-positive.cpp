class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();)
        {
             if(nums[i]<=0)
             {
                nums.erase(nums.begin()+i);
             }else{
                i++;
             }
        }set<int>s;
        for(int i=0;i<nums.size();i++)
        {
          s.insert(nums[i]);
        }
        int c=0;
        int d=0;int i=1;
        for(auto x:s)
        {
          if(x==i)
          {
            i++;
            c++;
          }else{
            d=i;
            break;
          }
        }
        if(c==s.size())return c+1;
        return d;
    }
};