class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt  = 0;
        for(auto x : nums){
            int even=0;
            while(x) { x = x/10; even++;}
            if(even%2 == 0) {cnt++;}
        }
        return cnt;
    }
};