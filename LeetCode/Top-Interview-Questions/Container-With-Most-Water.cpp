class Solution {
public:
    int maxArea(vector<int>& h) {
        int p1 = 0, p2 = h.size()-1;
        int ans = -1;
        while(p1 < p2){
            int heigth = min(h[p1], h[p2]);
            int area = heigth * (p2 - p1);
            ans = max(ans, area);
            if(h[p1] > h[p2]){
                p2--;
            }else{
                p1++;
            }
        }
        return ans;
    }
};