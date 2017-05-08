class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        if len(nums) < 2: return False # We need at least two values in the dict.

        record = {} # Our dictionary

        for i in range(len(nums)): # Iterate through each number in nums.
            # If we find a "match" in the dictionary, we have our return value.
            # Return the index of the match and the current index.
            if target - nums[i] in record: # If we find a "match" in the dict.
                # Return the index of the match and the current index, in that order.
                return [record[target - nums[i]], i]
            else: # Otherwise...
                record[nums[i]] = i # Just add the record to our dict and continue.

        return []   # We should never get here, since we can always assume a
                    # solution exists. However, I included a default return
                    # for simplicity's sake.
