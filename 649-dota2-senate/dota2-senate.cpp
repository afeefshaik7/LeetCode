class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<senate.size();i++)
        {
            if(senate[i]=='R')q1.push(i);
            else q2.push(i);
        }int i=senate.size();
        while(q1.size()>0 && q2.size()>0)
        {  
            if(q1.front()<q2.front())
            {
                q2.pop();
                q1.pop();
                q1.push(i);

            }else if(q1.front()>q2.front())
            {
                q1.pop();
                q2.pop();
                q2.push(i);
            }i++;
        }
        if(q1.size()==0)return "Dire";
        return "Radiant";
    }
};