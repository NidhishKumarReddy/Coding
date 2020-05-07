class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[(nums[i]-1)%(n+1)]+=(n+1);
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(nums[i]/(n+1) == 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};