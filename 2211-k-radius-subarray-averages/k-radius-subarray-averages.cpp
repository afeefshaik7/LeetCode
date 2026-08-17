class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int b=2*k;
        int l=0;long long s=0;int c=0;
        vector<int>ve(nums.size(),-1);int j=k;
        for(int r=0;r<nums.size();r++)
        {
          s=s+nums[r];
          c++;
          if(r-l==b)
          {
            int a=s/(c);
            ve[j]=a;
            j++;
            s=s-nums[l];
            c--;
            l++;
          }
        }
       return ve;
    }
};