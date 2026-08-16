class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>vec;
        
        for(int i=0;i<n;i++)
        {
            if((candies[i]+extraCandies)>=*max_element(candies.begin(),candies.end()))
            {
                vec.push_back(1);
            }else{
                vec.push_back(0);
            }
        }
        return vec;
    }
};