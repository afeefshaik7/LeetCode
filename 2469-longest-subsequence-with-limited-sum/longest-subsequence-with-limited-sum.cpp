class Solution {
public:
    vector<int> answerQueries(vector<int>& n, vector<int>& q) {
        vector<int>v;
        sort(n.begin(),n.end());
        for(int i=0;i<q.size();i++)
        {
            int sum=0;int c=0;
            for(int j=0;j<n.size();j++)
            {
                if(n[j]<=q[i])
                {
                   sum=sum+n[j];
                   c++;
                   if(sum>q[i])
                   {
                    sum=sum-n[j];
                    c--;
                   }
                }
            }v.push_back(c);
        }return v;
    }
};