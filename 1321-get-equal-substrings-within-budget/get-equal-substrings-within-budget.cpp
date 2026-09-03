class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int sum=0;int left=0;int mx=INT_MIN;
        for(int i=0;i<t.size();i++)
        {
            sum=sum+abs(t[i]-s[i]);
            if(sum>maxCost)
            {
                while(sum>maxCost)
                {
                    sum=sum-abs(s[left]-t[left]);
                    left++;
                }
            }mx=max(i-left+1,mx);
        }return mx;
    }
};