class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev = 0;
        int dub = x;

        while(x != 0){
            int last = x % 10;
            x = x / 10;
            rev = rev * 10 + last;
        }
        return rev == dub;
        
        
    }
};