# Python Solution for 4 - Median of Two Sorted Arrays

## Approach

The median of any set of numbers can be arrived at by splitting the set of
numbers into two number sets such that the sizes of the sets are equal and all of
the numbers in the first set are smaller than all of the numbers in the second set.
Then, you simply average the minimum from the first set with the maximum of the
second set. Thus, we simply need to implement a method two find these two sets.

## Explanation

To do this we will use binary search. First, make sure that the first array of
numbers given is larger than the second (switch the arrays if needed). Then, the
arrays will be cut be repeatedly using a binary search for low and high values of
each array. If a point is ever found in which both low values are less than both
high values, simply average the max of the low values with the min of the high
values. This is the answer. Note that the values you start with should be the
middle values of each array, and then you should expand outwards.
