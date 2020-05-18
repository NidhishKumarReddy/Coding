class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        vector<int> ans;
        int carry = 0;
        if(digits[0] != 9){
            digits[0]++;
            ans = digits;
            reverse(ans.begin(), ans.end());
            return ans;
        }
        
        for(int i = 0; i < digits.size(); i++){
            if(i == 0){
                digits[i] = 0;
                carry = 1;
                continue;
            }
            if(carry == 1){
                if(digits[i] != 9){
                    digits[i]++;
                    carry = 0;
                }else{
                    digits[i] = 0;
                    carry = 1;
                }
            }
        }
        ans = digits;
        if(carry == 1){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};