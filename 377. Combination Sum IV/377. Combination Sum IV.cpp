#define         ll      unsigned long long
class Solution {
public:
    ll combinationSum4(vector<int>& nums, int target){
        ll dp[target + 1] ;
        memset(dp,0,sizeof(dp));
        dp[0] = 1 ; 
        for(ll i =1 ; i<= target ; i++)
            for(ll e : nums){
                if(e > target) continue;
                if(i >= e)  dp[i] += dp[i-e];
            }
        return dp[target];
    }
};
