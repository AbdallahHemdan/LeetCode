class Solution {
public:
    bool divisorGame(int N) {
        // If (N) is even So "Alice" will win the Game
        return !(N&1);
    }
};
