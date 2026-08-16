class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        string b;
        int ans=INT_MIN;
        int c=0;
        for(int right=0;right<s.size();)
        {
            b.push_back(s[right]);
           if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u')
           {
               c++;
           }
           if(right-left+1==k)
           {
            ans=max(ans,c);
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u')
           {
               c--;
           }
            b.erase(b.begin()+0);
            left++;
           }right++;
        }return ans;
    }
};