import heapq
from collections import defaultdict as defaultDict
class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        heap = []                       # Our heap
        result = []                     # The array we return
        countDict = defaultDict(int)    # A record of the number counts.

        for num in nums: # Iterate all the numbers in nums.
            countDict[num] += 1 # Record each count.

        for num, count in countDict.items(): # Iterate countDict.
            # Push a tuple of the negative count (so they will be ordered correctly)
            # and the number onto the heap.
            heapq.heappush(heap, (-count, num))

        for _ in range(k): # Do this k times.
            result.append(heapq.heappop(heap)[1]) # Pop the heap into result.

        return result
