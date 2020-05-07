class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long m1 = LLONG_MIN;
        long long m2 = LLONG_MIN;
        long long m3 = LLONG_MIN;
        for(auto x : nums){
            if(m1 == x || m2 == x || m3 == x) {continue;}
            if(x > m1){
                m3 = m2;
                m2 = m1;
                m1 = x;
            }else if(x > m2){
                m3 = m2;
                m2 = x;
            }else if(x > m3){
                m3 = x;
            }
        }
        if(m3 == LLONG_MIN) {return m1;}
        return m3;
    }
};