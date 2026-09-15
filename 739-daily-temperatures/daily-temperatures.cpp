class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t ) {
        stack<int>s;
        int a=t.size();
        vector<int>v(a,0);
        int i=0;
        while(i<t.size())
        {
            if(s.size()==0){
                s.push(i);
            }
            else{
              if(t[i]>t[s.top()])
              {
                v[s.top()]=i-s.top();
                s.pop();
                while(s.size()>0)
                {
                 if(t[i]>t[s.top()])
                {
                 v[s.top()]=i-s.top();
                 s.pop();
                }else{
                    break;
                }
              }
              s.push(i);
            }
            }s.push(i);
            i++;
        }return v;
    }
};