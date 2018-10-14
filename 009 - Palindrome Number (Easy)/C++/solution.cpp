class Solution {
public:
    int reverse(int x) {
        long long newNum = 0;       // Initialize our new number.
            
        while (x > 0) {             // While x is greater than 0
            newNum *= 10;           // Multiply our new number by 10 (to generate a new one's place)
            newNum += x % 10;       // Add the ones digit of x to our new number
            x /= 10;                // Divide x by 10 (to shift x to the right one digit)
        }
            
        return newNum;
    }
    
    bool isPalindrome(int x) {
        return x >= 0 && x == reverse(x);
    }
};