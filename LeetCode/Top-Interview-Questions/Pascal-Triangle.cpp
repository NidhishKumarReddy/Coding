class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        if(numRows == 0){
            return ans;
        }
        ans[0].push_back(1);
        for(int i = 1; i < numRows; i++){
            ans[i].push_back(1);
            for(int k = 0; k< ans[i-1].size()-1; k++){
                ans[i].push_back(ans[i-1][k]+ans[i-1][k+1]);
            }
            ans[i].push_back(1);
        }
        return ans;
    }
};