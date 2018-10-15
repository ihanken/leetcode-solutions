class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() < 1) return "";                                                     // If strs is empty, return an empty string                                           
    
        string prefix = strs[0];                                                            // Initialize the prefix to the first string
    
        for(int i = 1; i < strs.size(); i++){                                               // For each string
            int j = 0;                                                                      // Create a new iterator and initialize it to 0
            
            while(j < min(prefix.size(), strs[i].size()) && strs[i][j] == prefix[j]) j++;   // Increment until strings are no longer equal
            
            prefix = strs[i].substr(0, j);                                                  // Slive the prefix down based on the iterator
        }
                  
        return prefix;                                                                      // Return prefix
    }
};