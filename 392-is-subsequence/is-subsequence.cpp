class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0;
        int right=0;int c=0;
        while(right<t.size() && left <s.size())
        {
                if(s[left]==t[right]){c++;
                left++;
                right++;
                }
                else{
                    right++;
                }
        }if(s.size()==c)return 1;
        else return 0;
    }
};