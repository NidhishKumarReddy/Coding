class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto x : arr) {m[x]++;}
        for(auto x : arr){
            if(x != 0 && m.count(x*2)){return true;}
            if(x == 0 && m[x]>1) {return true;}
        }
        return false;
    }
};