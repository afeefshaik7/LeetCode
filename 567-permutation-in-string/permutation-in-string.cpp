class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left=0;map<char,int>m;
        for(auto i:s1)
        {
            m[i]++;
        }map<char,int>mp;
        for(int right=0;right<s2.size();right++)
        {
            mp[s2[right]]++;
            if(right-left+1==s1.size())
            {
              if(mp==m)return 1;
              mp[s2[left]]--;
              if(mp[s2[left]]==0)mp.erase(s2[left]);
              left++;
            }
        }return 0;
    }
};