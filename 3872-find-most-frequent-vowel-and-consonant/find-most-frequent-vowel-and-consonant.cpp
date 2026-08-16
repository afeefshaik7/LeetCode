class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>x;
        vector<int>a;
        vector<int>b;
        int c=0;
        int d=0;
        for(char i:s)
        {
            x[i]++;
        }
        int sum=0;
        for(auto i:x)
        {
         if(i.first=='e'||i.first=='a'||i.first=='i'||i.first=='o'||i.first=='u')
         {
           a.push_back(i.second);
         }else{
            b.push_back(i.second);
         }
        }if(a.size()>0)
          c=*max_element(a.begin(),a.end());
          if(b.size()>0)
          d=*max_element(b.begin(),b.end());
        sum=c+d;
        return sum;
    }
};