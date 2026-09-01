int canDivide(vector<int>v,int t,int k)
{
   int sum=0;
   for(int i=0;i<v.size();i++)
   {
    sum=sum+ceil(1.0*v[i]/k);
   }
   if(sum>t)
   {
    return  0;
   }else {
    return 1;
   }
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(canDivide(nums,threshold,mid))
        {
            high=mid-1;
        }else{
            low=mid+1;
        }
       }return low;
    }
};