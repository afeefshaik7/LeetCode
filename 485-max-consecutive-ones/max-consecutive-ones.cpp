class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>v;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==0)
         {
            v.push_back(c);
            c=0;
         }else{
            c++;
         }
        }v.push_back(c);
        int n=*max_element(v.begin(),v.end());
        return n;
    }
};