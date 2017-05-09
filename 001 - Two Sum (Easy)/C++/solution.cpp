class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2) return vector<int>(); // We need at least two numbers.

        map<int, int> record; // Our dictionary.

        for (int i = 0; i < nums.size(); i++) { // Iterate through every index of nums.
            if (record.find(target - nums[i]) != record.end()) { // If we find a match.
                // Return the index of the match and the current index, in that order.
                return vector<int>({record[target - nums[i]], i});
            }
            else { // Otherwise...
                record[nums[i]] = i; // Add our key-value pair to record.
            }
        }

        return vector<int>(); // Default return. We shouldn't ever get here.
    }
};
