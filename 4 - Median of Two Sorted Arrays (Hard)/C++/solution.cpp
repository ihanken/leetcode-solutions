class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() < nums2.size()) { // Make nums2 the shorter one.
            vector<int> tmp = nums1;
            nums1 = nums2;
            nums2 = tmp;
        }

        int size1 = nums1.size();
        int size2 = nums2.size();

        // If the smaller array is empty, just find the median of the larger array.
        if (nums2.size() == 0) return ((double) nums1[(size1 - 1) / 2] + (double) nums1[size1 / 2]) / 2;

        int low = 0, high = size2 * 2;
        while (low <= high) {
            int mid2 = (low + high) / 2;
            int mid1 = size1 + size2 - mid2;

            double L1 = (mid1 == 0) ? INT_MIN : nums1[(mid1 - 1) / 2]; // Low of nums1.
            double L2 = (mid2 == 0) ? INT_MIN : nums2[(mid2 - 1) / 2]; // Low of nums2.
            double R1 = (mid1 == size1 * 2) ? INT_MAX : nums1[(mid1) / 2]; // High of nums1.
            double R2 = (mid2 == size2 * 2) ? INT_MAX : nums2[(mid2) / 2]; // High of nums2.

            if (L1 > R2) low = mid2 + 1;		// num1's lower half is too big.
            else if (L2 > R1) high = mid2 - 1;	// num2's lower half is too big.
            else return (max(L1,L2) + min(R1, R2)) / 2;	// Otherwise, return.
        }

        return (double) -1; // Shouldn't ever get here.
    }
};
