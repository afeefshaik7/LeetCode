class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {
        vector<int>v(n,0);
        for(int i=0;i<b.size();i++)
        {
           int c=b[i][0];
           int d=b[i][1];
           for(int j=c-1;j<d;j++)
           {
            v[j]=v[j]+b[i][2];
           }
        }
        return v;
    }
};