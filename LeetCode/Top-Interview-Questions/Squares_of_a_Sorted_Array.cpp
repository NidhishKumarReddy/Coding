class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> B;
        for(auto x : A) {B.push_back(x*x);}
        sort(B.begin(), B.end());
        return B;
    }
};