map<char, int> values = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};

class Solution {
public:
    int romanToInt(string s) {
        int last = 0;
        int total = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int current = values[s[i]];
            
            total += current;
            
            if (current > last) total -= last * 2;
            
            last = current;
        }
        
        return total;
    }
};