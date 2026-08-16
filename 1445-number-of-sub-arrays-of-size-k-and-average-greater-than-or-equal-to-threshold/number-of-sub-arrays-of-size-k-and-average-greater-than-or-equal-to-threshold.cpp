class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0;double ans=0;
        double sum=0;int c=0;
        for(int right=0;right<arr.size();right++)
        {
            sum=sum+arr[right];
            if(right-left+1==k)
            {
             ans=sum/k;
             if(ans>=threshold)
             {
                c++;
             }sum=sum-arr[left];
             left++;
            }
        }return c;
    }
};