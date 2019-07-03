class Solution {
public:
    int fib(int N) {
        int Fib[35];    
        Fib[0] = 0 ; 
        Fib[1] = 1 ; 
        
        for(ll i=2 ;i <= n ; i++)
            Fib[i] = Fib[i-1] + Fib[i-2];
        
        return Fib[n];
    }
};
