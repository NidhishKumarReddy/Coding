class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int mount = -1; 
        if(a.size() < 3) {return false;}
        for(int i = 0; i < a.size()-1; i++){
            if(a[i] == a[i+1]) {return false;}
            if(a[i] < a[i+1] && mount == -1) {mount = 0;}
            if(a[i] > a[i+1] && mount == -1) {return false;}
            if(a[i] > a[i+1] && mount == 0) {mount = 1;}
            if(a[i] < a[i+1] && mount == 1) {return false;}
        }
        if(mount == 0) {return false;}
        return true;
    }
};