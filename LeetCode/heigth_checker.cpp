class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> results = heights;
        sort(results.begin(), results.end());
        for(int i = 0; i < heights.size(); i++){
            if(results[i] != heights[i]) {cnt++;}
        }
        return cnt;
    }
};