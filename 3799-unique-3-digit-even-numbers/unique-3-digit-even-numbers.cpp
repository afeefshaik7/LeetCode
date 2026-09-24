class Solution {
public:
    int totalNumbers(vector<int>& d) {
        map<int,int>m;int b=0;int c=0;
        for(int i=0;i<d.size();i++)
        {
            int a=d[i]*100;
            for(int j=0;j<d.size();j++)
            {
                if(i==j){
                    j++;
                    if(j==d.size())break;
                }   b=d[j]*10;
                for(int k=0;k<d.size();k++)
                {
                    if(j==k||k==i){
                    while(j==k || k==i){
                        k++;
                    }
                    if(k==d.size())break;
                     c=a+b+d[k];
                    }else{
                     c=a+b+d[k];
                    }
                     if(c>=100 && c%2==0)
                    {
                        m[c]++;
                    }
                }
            }    
            }
        for(auto i:m)cout<<i.first<<endl;
        return m.size();
    }
};