class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int pref = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            pref += nums[i];
            if(pref == k){
                cnt++;
            }
            if(mp.count(pref-k)){
                cnt += mp[pref-k];
            }
            mp[pref]++;
        }
        return cnt;
    }
};