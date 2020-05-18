//Boyer-Moore Voting Algorithm O(N)time, O(1)space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Finding the majority element
        int element = nums[0];
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != element){
                count--;
                if(count == 0){
                    element = nums[i];
                    count = 1;
                }
            }
            else if(nums[i] == element){
                count++;
            }
        }
        //Verifying the Element
        int cnt = 0;
        
        for(auto x : nums){
            if(x == element){
                cnt++;
            }
        }
        if(cnt <= nums.size()/2){
            return -1;
        }
        return element;
    }
};