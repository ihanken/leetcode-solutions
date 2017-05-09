class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if (A.size() < 3) return 0; // There must be three terms for an arithmetic sequence to exist.

        int current = 0;    // The current length of the arithmetic series.
        int sum = 0;        // The total number of arithmetic series.

        for (int i = 2; i < A.size(); i++) { // Iterate through every number beyond i = 1;
            if (A[i - 2] - A[i - 1] == A[i - 1] - A[i]) { // The index is part of an arith. series.
                current += 1;   // Add  to the length of the current arithmetic series.
                sum += current; // Add the current length to the sum.
            }
            else { // Otherwise, we found the end of an arithmetic series.
                current = 0; // Reset the current length.
            }
        }

        return sum; // Sum is our answer.
    }
};
