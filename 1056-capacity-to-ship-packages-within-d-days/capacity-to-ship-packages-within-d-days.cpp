int canload(int k,int days,vector<int>v)
{
    int sum=0;int c=0;
    for(int i=0;i<v.size();i++)
    {
      sum=sum+v[i];
      if(k==sum)
      {
        c=c+1;
        sum=0;
      }else if(k<sum)
      {
        c=c+1;
        sum=v[i];
      }
    }if(sum>0)c=c+1;
    if(c<=days)
     return 1;
    else
    return 0;
}
class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int low=*max_element(w.begin(),w.end());
        int high=*max_element(w.begin(),w.end())*days;
        for(int i=0;i<w.size();i++)
        {
            high=high+w[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(canload(mid,days,w)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }return low;
    }
};