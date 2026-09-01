int caneat(int k,int h,vector<int>piles)
{
    long long sum=0;
    for(int i=0;i<piles.size();i++)
    {
    sum=sum+(ceil(1.0*piles[i]/k));
    }if(sum>h)
    {
        return 0;
    }
    return 1;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
        int mid=(low+high)/2;
           if(caneat(mid,h,piles))
           {
              high=mid-1;
           }else{
            low=mid+1;
           }
        }return low;
    }
};