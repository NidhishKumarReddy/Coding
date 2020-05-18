class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int sum = 0;
        for(auto x:nums){
            sum = max(sum+x, x);
            m = max(m, sum);
        }
        return m;
    }
};
