class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> B;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0) {B.push_back(0); B.push_back(0);}
            else if(arr[i] != 0) {B.push_back(arr[i]);}
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = B[i];
        }
    }
};