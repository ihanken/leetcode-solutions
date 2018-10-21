#include <deque>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size() < 1) return NULL;   // We can't make a tree with no value.
        
        deque<TreeNode*> deque;             // Use a deque so we have O(1) access to the "top" and "bottom" of stack.
        
        for (int num : nums) {
            TreeNode* node = new TreeNode(num);
            
            /**
             * As long as the node at the top of the stack has a value less than the one
             * we are currently looking at, we know that these nodes will be on the left
             * subtree of our current value's node. Pop and assign the left pointer of
             * our current value's node until a value greater than our current value is found.
             */
            while (!deque.empty() && deque.back()->val < node->val) {
                node->left = deque.back();
                deque.pop_back();
            }
            /**
             * We know that the top of our stack is the lowest value greater than our current value,
             * so that node's right pointer should be our current value's node.
             */
            if (!deque.empty()) deque.back()->right = node;
            
            // Add each node to the "top" of the stack once we are done editing.
            deque.push_back(node);
        }
        
        return deque.front(); // Return the "bottom" of the stack, since this is our max node.
    }
};