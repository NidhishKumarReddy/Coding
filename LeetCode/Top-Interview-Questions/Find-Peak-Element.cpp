class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        if(nums.size() == 1){return 0;}
        if(nums[0] > nums[1]){return 0;}
        if(nums[end] > nums[end - 1]){return end;}
        start++; end--;
        int mid;
        while(start <= end){
            mid = start + ((end-start)/2);
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
                break;
            }
            if(nums[mid] < nums[mid + 1]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return mid;
    }
};