class Solution {
public:
    int maxScore(vector<int>& ca, int k) {
        int sum=0;int c=0;int d=INT_MIN;
       for(int i=0;i<k;i++)
       {
        sum=sum+ca[i];
       }
       d=max(d,sum);
       sum=0;
       int index=0;
       for(int i=ca.size()-1;i>=0;i--)
       {
        sum=sum+ca[i];
        c++;
        index=i;
        if(c==k)break;
       }
       int f=index;sum=0;c=0;
       for(int i=index;i<ca.size()+k;i++)
       {
         sum=sum+ca[i%ca.size()];
         c++;
         if(c==k)
         {
            d=max(sum,d);
            sum=sum-ca[f%ca.size()];
            f++;
            c--;
         }
       }
       d=max(d,sum);
       return d;
    }
};