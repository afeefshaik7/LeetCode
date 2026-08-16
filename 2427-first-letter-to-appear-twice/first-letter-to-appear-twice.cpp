class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        vector<char>v; v.push_back(s[0]);char b='1';
        for(int i=1;i<s.size();i++)
        {
           for(int j=0;j<v.size();j++)
           {
            if(s[i]==v[j])
            {
              b=s[i];
              break;
            }
           }v.push_back(s[i]);
          if(b!='1') break;
        }return b;
    }
};