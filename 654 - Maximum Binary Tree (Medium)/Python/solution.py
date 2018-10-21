class Solution:
    def constructMaximumBinaryTree(self, nums):
        if not nums: return None # If we have no values, it will produce and empty tree
        
        stack = [] # Use a python list for a stack
        
        for num in nums:
            node = TreeNode(num)
            
            # As long as the node at the top of the stack has a value less than the one
            # we are currently looking at, we know that these nodes will be on the left
            # subtree of our current value's node. Pop and assign the left pointer of
            # our current value's node until a value greater than our current value is found. 
            while stack and stack[-1].val < num:
                node.left = stack.pop()
            
            # We know that the top of our stack is the lowest value greater than our current value,
            # so that node's right pointer should be our current value's node.
            if stack: stack[-1].right = node
            
            # Add each node to our stack once we are done editing.
            stack.append(node)
            
        return stack[0] # Return our bottom value (since we know this will be the max node)
        