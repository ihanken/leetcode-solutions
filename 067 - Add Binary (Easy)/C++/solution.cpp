class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";  // An empty string for our return value.

        // c is used to track carry value, i is our a index, and j is our b index.
        int c = 0, i = a.size() - 1, j = b.size() - 1;

        // Work backwards through a and b. Also, iterate if we're done with a or b but there is a carry left.
        while(i >= 0 || j >= 0 || c == 1) {
            c += i >= 0 ? a[i --] - '0' : 0;    // If there are digits left in a, add that digit to c.
            c += j >= 0 ? b[j --] - '0' : 0;    // If there are digits left in b, add that digit to c.
            s = char(c % 2 + '0') + s;          // Take the modulo 2 of c, cast it into a character, and prepend it to s.
            c /= 2;                             // Divide c by 2. This produces the carry.
        }

        return s; // Return s.
    }
};
