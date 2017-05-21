class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<pair<TreeNode*, int>> q; // A queue of pairs of tree nodes and integers to denote the level of the node.

        int currentBottomLevel = 1;         // The current bottom-most level found.
        TreeNode* currentBottomLeft = root; // The current bottom-left-most node found.

        q.push(make_pair(root, 1)); // Start with the root in the queue.

        while (!q.empty()) { // Iterate through the queue.
            TreeNode* currentNode = q.front().first;    // The TreeNode at the front of the queue.
            int currentLevel = q.front().second;        // The level of that TreeNode.

            q.pop(); // Remove the front element of the queue.

            if (currentBottomLevel < currentLevel) { // If a new lowest level is found
                currentBottomLevel = currentLevel;   // Set a new lowest level.
                currentBottomLeft = currentNode;     // Set a new bottom left node.
            }

            if (currentNode->left) q.push(make_pair(currentNode->left, currentLevel + 1));      // Add the left child.
            if (currentNode->right) q.push(make_pair(currentNode->right, currentLevel + 1));    // Add the right child.
        }

        return currentBottomLeft->val;
    }
};
