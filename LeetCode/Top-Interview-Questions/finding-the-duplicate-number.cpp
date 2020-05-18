class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int rabbit = nums[0];
        //Phase-1-Intersection point.
        while(1){
            rabbit = nums[nums[rabbit]];
            tortoise = nums[tortoise];
            if(rabbit == tortoise){
                break;
            }
        }
        //Phase-2-Starting point
        tortoise = nums[0];
        while(1){
            if(rabbit == tortoise){
                break;
            }
            rabbit = nums[rabbit];
            tortoise = nums[tortoise];
        }
        return rabbit;
    }
};