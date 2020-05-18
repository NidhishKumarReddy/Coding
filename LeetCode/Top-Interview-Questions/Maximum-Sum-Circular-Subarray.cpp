class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int sum1 = 0;
        int best1 = INT_MIN;
        for(auto x : A){
            sum1 = max(x, x+sum1);
            best1 = max(sum1, best1);
        }
       cout<<best1<<"\n";
       int sum2 = 0;
       int best2 = INT_MAX;
       int sum = 0;
        for(auto x : A){
            sum = sum + x;
            sum2 = min(x, x+sum2);
            best2 = min(sum2, best2);
        }
      best2 = sum - best2;
      if(best1 < 0)
          return best1;
      if(best1>=best2)
          return best1;
      return best2;
    }
};