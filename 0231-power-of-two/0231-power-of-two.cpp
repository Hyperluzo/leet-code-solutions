class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Base cases
        if (n <= 0) return false;
        if (n == 1) return true;

        // If not divisible by 2, can't be a power of 2
        if (n % 2 != 0) return false;

        // Recursive call
        return isPowerOfTwo(n / 2);
    }
};