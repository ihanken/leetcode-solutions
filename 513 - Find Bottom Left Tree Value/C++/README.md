# C++ Solution for 513 - Find Bottom Left Tree Value

## Approach

Just do a breadth first search of the tree. When you reach a new level, the first
node visited is your new bottom left value.

## Explanation

Use a queue, and enqueue the root paired with its level. Then iterate through the
queue, and at each iteration, first check to see if the a new level has been
reached. If so, update the lowest level and the answer. Then enqueue the left
and right children. Once the queue is empty, every node has been visited, and
we can return.
