class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        int p = 1;
        output.push_back(1);
        for(int i = 1; i < n; i++){
            p = p * nums[i-1];
            output.push_back(p);
        }
        int suffix = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            output[i] = output[i] * suffix;
            suffix = suffix * nums[i];
        }
        return output;
        
    }
};