class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>v;
        vector<int>ve;vector<int>m;
        v.push_back(nums[0]);
        ve.push_back(nums[1]);
        int j=0;
        int k=0;
        for(int i=2;i<nums.size();i++)
        {
         if(v[j]>ve[k])
         {
            v.push_back(nums[i]);
            j++;
         }else{
            ve.push_back(nums[i]);
            k++;
         }
        }for(int i=0;i<v.size();i++)
        {
            m.push_back(v[i]);
        }for(int i=0;i<ve.size();i++)
        {
            m.push_back(ve[i]);
        }
        return m;
    }
};