# Python Solution for 540 - Single Element in Sorted Array

## Approach

The question asks to find the answer in `O(log(n))`, which should immediately make you think of binary search. The tricky part about this question is figuring out how we should
compare elements in our binary search. We know that there is only one element that isn't duplicated in the array. As such, we know that
`arr[0] == arr[1], arr[2] == arr[3], ..., arr[n] == arr[n + 1]` up until the point in which the non-duplicate number is found. So, we can determine which half of the array our answer
is in by determining if `arr[mid]` is equal to `arr[pair(mid)]`, where `pair(n)` would be the number that is paired up with n in the previous sequence. For example, `pair(0)` is `1`,
`pair(1)` is `0`, `pair(2)` is `3`, etc. We can also say that these pairs are formed by XORing one number with 1 to get the other number, so we can say `pair(n) = n XOR 1`.

## Explanation

Start with a low index of 0 and a high index of `len(nums) - 1`. While these two numbers differ, define `mid` as `(low + high) / 2`. If `nums[mid] == nums[mid ^ 1]`, we know to search
the upper half of the array, since the values indexed by the paired indices are still equal. If this is no longer the case, we can search the bottom half of the array. Once `low` is no
longer less than `high`, we know that we have found our answer, and we can return `nums[low]`.