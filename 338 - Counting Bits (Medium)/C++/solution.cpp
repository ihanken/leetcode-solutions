class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> bitCount(num + 1, 0);

        /* For each number past zero, the amount of ones in a number is simply 1
         * more than the amount of ones in the number that is the result of the
         * & of that number and the previous number.
         * i.e. 2 = 11; 1 = 1; 2 & 1 = 1 (a single 1); 1 + 1 = 2, etc. etc.
         */
        for (int i = 1; i <= num; ++i) bitCount[i] += bitCount[i & (i - 1)] + 1;

        return bitCount;
    }
};
