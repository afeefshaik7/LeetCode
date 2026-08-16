class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v(nums);
        sort(v.begin(),v.end());
        int l=0;
        int r=0;int c=0;int mx=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=nums[i] && c==0)
            {
                l=i;
                c++;
            }if(v[i]!=nums[i] && c>0)
            {
                r=i;
                mx=abs(l-r)+1;
            }
        }return mx;
    }
};