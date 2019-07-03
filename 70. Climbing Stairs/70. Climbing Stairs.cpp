// DP Solution
class Solution {
public:
    int climbStairs(int n) {
        const int MAXN = 1e5 + 5 ;
        int dp[MAXN];
        dp[0] = 1 ; 
        dp[1] = 1 ; 
        for(int i=2 ;i<=n ;i++)
            dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};


// Recursion with Memoization Algorithm
class Solution {
public:
    int climbStairs(int n) {
        int mem[n+1];
        memset(mem,0,sizeof(mem));
        return Climb_Stairs(0,n,mem);
    }
    
    int Climb_Stairs(int i, int n, int mem[]){
        if(i > n) return 0;
        if(i == n) return 1;
        
        if(mem[i] > 0) return mem[i];
        mem[i] = Climb_Stairs(i+1,n,mem) + Climb_Stairs(i+2,n,mem);
        return mem[i];
    }
};
