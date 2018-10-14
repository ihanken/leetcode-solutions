class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0;      // Keep track of x's sign
        long newNum = 0;            // Initialize our new number
        
        x = abs(x);                 // Make x positive
            
        while (x > 0) {             // While x is greater than 0
            newNum *= 10;           // Multiply our new number by 10 (to generate a new one's place)
            newNum += x % 10;       // Add the ones digit of x to our new number
            x /= 10;                // Divide x by 10 (to shift x to the right one digit)
        }
        
        if (negative) newNum *= -1; // Make our new number negative if x was.
            
        return newNum > INT_MAX || newNum < INT_MIN ? 0 : (int) newNum;
    }
};