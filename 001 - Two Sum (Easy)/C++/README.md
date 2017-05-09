# C++ Solution for 1 - Two Sum

## Approach

Two Sum is a generally simple problem that changes in time/space complexity
depending on whether the collection is sorted or not. In the case of this
problem, the collection is not sorted, so a solution with O(1) space will have
to be at least O(nlog(n)) time (you could iterate through each element and
binary search for an element that would satisfy the sum). However, a dictionary
can be used to achieve O(n) time and O(n) space, which is generally going to be
better. Thus, I'm going to go with that solution.

## Explanation

At each index of the `nums` list, just add a key-value pair to `record`. The key
should always be the number, because if there is only one solution, than a
number that is part of the solution must only appear once. The value should be
the index of the number. This way, we can have O(1) access to the index of any
number we want. However, if we reach an index where `target - nums[index]` is
one of the keys in record, we have a solution, so we can return immediately.

Thus, because `nums` only needs to be iterated over once and any dictionary
operation used is O(1) time, we achieve an O(n) time complexity. Additionally,
the size or `record` will be linearly proportional to the size of `nums`, which
gives us an O(n) space complexity.
