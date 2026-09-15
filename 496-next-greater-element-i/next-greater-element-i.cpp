class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int,int>m;
        for(int i=0;i<nums2.size();i++)
        {
            if(s.size()==0)
            {
                s.push(nums2[i]);
            }else{
                if(nums2[i]>s.top())
                {
                    m[s.top()]=nums2[i];
                    s.pop();
                    while(s.size()>0)
                    {
                    if(nums2[i]>s.top())
                    {
                    m[s.top()]=nums2[i];
                    s.pop();
                    }else{
                        break;
                    }
                }
            }
            s.push(nums2[i]);
        }
    }vector<int>v(nums1.size(),-1);
    for(int i=0;i<nums1.size();i++)
    {
        if(m[nums1[i]]==0){
            v[i]=-1;
        }else
        v[i]=(m[nums1[i]]);
    }return v;
    }
};