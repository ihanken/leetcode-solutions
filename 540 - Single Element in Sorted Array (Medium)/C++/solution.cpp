class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Initially, our low and high should be the first and last index
        int low = 0;
        int high = nums.size() - 1;
        
        // Iterate until our indices converge
        while (low < high) {
            int mid = (low + high) / 2;
            
            /**
             * All pairs of indices [(0, 1), (2, 3), ..., (n, n + 1)]
             * can have either of their indices XORed with 1 to get the
             * other element. Thus, if at any point nums[mid] == nums[mid ^ 1],
             * we know that the next all previous pairs also matched (since
             * in a non-duplicate would offset everything by one). So if these
             * values match, we look at the upper half of the array. Otherwise,
             * we know the single value is in the lower half of the array, so we
             * check there.
             */
            if (nums[mid] == nums[mid ^ 1]) low = mid + 1;
            else high = mid - 1;
        }
        
        /**
         * Once our indices converge, we know low will have the answer, 
         * since low will not change once we find two mismatching indices.
         */
        return nums[low];
    }
};