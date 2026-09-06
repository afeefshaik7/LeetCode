class Solution {
public:
    int countGoodRotations(vector<int>& s) {
        int c=0;long long  sum=0;long long rsum=0;
        for(int i=0;i<s.size()/2;i++)
        {
            sum=sum+s[i];
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            rsum=rsum+s[i];
        }if(sum>rsum)c++;
        int i=0;int k=0;
        int j=s.size()/2;
        while(1)
        {
            rsum=rsum+s[i];
            if(j==s.size())j=0;
            rsum=rsum-s[j];
            sum=sum+s[j];
            sum=sum-s[i];
            if(sum>rsum)c++;
            i++;
            k++;
            j++;
            if(k==s.size()-1)break;
        }
        return c;
    }
};