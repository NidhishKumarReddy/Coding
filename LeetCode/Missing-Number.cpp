class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int real = (n*(n+1))/(2);
        int actual = 0;
        for(int i = 0; i < n; i++){
            actual += nums[i];
        }
        int diff = real - actual;
        return diff;
    }
};