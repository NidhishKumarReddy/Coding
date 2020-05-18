class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x : nums){
            s.insert(x);
        }
        if(s.size() == nums.size())
            return false;
        return true;
    }
};