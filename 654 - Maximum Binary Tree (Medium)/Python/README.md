# Python Solution for 654 - Maximum Binary Tree

## Approach

We can achieve an O(n) solution here by visiting every number of the array at most twice. If a smaller number comes after a larger number in the array, it
will always be put on the right subtree of that number, and if a smaller number comes before a larger number, it will be put on the left subtree. So when we
find a number, we just need to check if it is larger than the numbers seen before and act accordingly.

## Explanation

Use a stack to keep track of the values we have already seen. Iterate through each value in `nums`, and call the value found at a given time `currentNum`. For each `currentNum`, we
check to see if the node's value at the top of the stack is smaller. If so, we know that that node (or any nodes with larger values that are still smaller than `currentNum`) should 
be the left child of the node with `currentNum` as the value. To accomplish this logic, we pop the stock until the stack's top's value is greater than `currentNum`. We assign these
nodes to the left pointer of the node created from `currentNum` each time. Finally, we add the node created from `currentNum` to the stack. This ensures that our bottom node of the
stack is always the max node.

If `currentNum` is smaller than the value of the node at the top of the stack, we know it should be the right child of the node at the top of the stack. We assign this pointer, add
the node created with `currentNum` to the stack, and continue.

Once you have iterated through all values of the array, the bottom value of your stack will be the maximum node, and all of the pointer will be properly assigned, so just return the
bottom value.