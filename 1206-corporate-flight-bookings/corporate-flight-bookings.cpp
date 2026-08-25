class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {
        vector<int>pre(n+1,0);
        for(int i=0;i<b.size();i++)
        {
           int c=b[i][0];
           int d=b[i][1];
           pre[c-1]=pre[c-1]+b[i][2];
           pre[d]=pre[d]-b[i][2];
        }int sum=0;
        for(int i=0;i<pre.size();i++)
        {
           sum=sum+pre[i];
           pre[i]=sum;
        }pre.pop_back();
        return pre;
    }
};