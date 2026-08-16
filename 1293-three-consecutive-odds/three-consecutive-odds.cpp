class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
          if(arr.size()<=2)
            {
                return 0;
            }
         int a;
        for(int i=0;i<arr.size()-2;i++)
        {
              a=0;
            if(arr[i]%2!=0)
            {
              a++;
              if(arr[i+1]%2!=0)
              {
                a++;
                 if(arr[i+2]%2!=0)
                {
                    a++;
                    if(a==3)
                    break;
                }else{
                    a=0;
                }
              }
                else{
                    a=0;
                }
            }
            else{
                a=0;
            }
        }
        return a;
    }
};