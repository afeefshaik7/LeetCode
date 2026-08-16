class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(string s : o){
            if(s[1]=='-') x--;
            else x++;
        }
        return x;
    }
};