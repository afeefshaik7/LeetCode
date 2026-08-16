class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>b;
        map<vector<int>,int>m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            vector<int>v; 
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                v={};
               if(nums[i]+nums[j]+nums[k]==0)
               {
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[k]);
                k--;
                m[v]++;
               }else if((nums[i]+nums[j]+nums[k])>0)
               {
                 k--;
               }else {
                j++;
               }
            }
        }for(auto i :m)
        {
            b.push_back(i.first);
        }return b;
    }
};