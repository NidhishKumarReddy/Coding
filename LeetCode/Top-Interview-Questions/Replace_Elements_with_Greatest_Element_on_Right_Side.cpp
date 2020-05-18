class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        vector<int> b;
        b.push_back(-1);
        for(int i = arr.size()-2; i >= 0 ; i--){
            b.push_back(max);
            if(arr[i] > max) {max = arr[i];}
        }
        reverse(b.begin(), b.end());
        return b;
    }
};