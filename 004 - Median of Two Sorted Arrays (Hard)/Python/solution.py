class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        if len(nums1) < len(nums2): # Ensure nums2 is shorter than nums1.
            tmp = nums1
            nums1 = nums2
            nums2 = tmp

        size1, size2 = len(nums1), len(nums2) # Record the lengths for readability

        # If one array is empty, return the median of the other.
        if len(nums2) == 0: return (float(nums1[(size1 - 1) // 2]) + float(nums1[size1 // 2])) / 2

        low, high = 0, size2 * 2 # Low and high for binary search.

        while low <= high:
            mid2 = (low + high) // 2    # Starts at size2
            mid1 = size1 + size2 - mid2 # Starts at size1

            L1 = float('-inf') if mid1 == 0 else float(nums1[(mid1 - 1) // 2]) # Low of nums1.
            L2 = float('-inf') if mid2 == 0 else float(nums2[(mid2 - 1) // 2]) # Low of nums2.
            R1 = float('inf') if mid1 == size1 * 2 else float(nums1[mid1 // 2]) # High of nums1.
            R2 = float('inf') if mid2 == size2 * 2 else float(nums2[mid2 // 2]) # High of nums2.

            if L1 > R2: low = mid2 + 1 # num1's lower half is too large.
            elif L2 > R1: high = mid2 - 1 #num2's lower hald is too large.
            else: return (max(L1, L2) + min(R1, R2)) / 2 # Return

        return -1.0 # Default return. Should never get here.
