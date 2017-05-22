# Python Solution for 347 - Top K Most Frequent Elements

## Approach

Use a heap, an array, and a dictionary. Record each number count in the
dictionary. Then push tuples of the numbers and their counts onto the heap.
Finally, pop the heap `k` times into the array and return.

## Explanation

Use a defaultdict for the dictionary to save a bit of time. Record all of the
counts in this dict. Then iterate through the dictionary, and push a tuple of the
negative value and the key onto the heap. This allows for a bit of time saved
since we won't need to use a custom comparator. Then, pop the heap `k` times and
append the second piece of the tuple into result each time. That's our answer.
