class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max = -1;
        for(auto x : nums){
            if(x) {cnt++;}
            else {cnt=0;}
            if(cnt > max) {max = cnt;}
        }
        return max;
    }
};