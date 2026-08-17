class NumArray {
public:
    vector<int>a;
    NumArray(vector<int>& nums) {
        a=nums;
        a[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            a[i]=nums[i]+a[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        if(left==0) return a[right];
        sum=a[right]-a[left-1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */