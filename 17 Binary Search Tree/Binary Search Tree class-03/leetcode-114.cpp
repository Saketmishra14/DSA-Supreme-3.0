//leetcode-: 114. Flatten Binary Tree to Linked List

class Solution {
public:
    void solve(TreeNode* root, TreeNode* &head) {
        if (root == NULL) return;

        // Go right first (reverse preorder)
        solve(root->right, head);

        // Then go left
        solve(root->left, head);

        // Link current node to the already processed part
        root->right = head;
        root->left = NULL;

        // Move head to current node
        head = root;
    }

    void flatten(TreeNode* root) {
        TreeNode* head = NULL;
        solve(root, head);
    }
};
