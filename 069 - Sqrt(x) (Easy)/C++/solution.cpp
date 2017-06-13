class Solution {
public:
    int mySqrt(int x) {
        long currentNum = x; // Convert to a long.

        while (currentNum * currentNum > x)  // While currentNum squared is larger than x.
            // Reduce currentNum by adding the quotient of x divided by currentNum
            // to currentNum and then dividing this sum by two.
            currentNum = (currentNum + x / currentNum) / 2;

        return currentNum; // Return currentNum.
    }
};
