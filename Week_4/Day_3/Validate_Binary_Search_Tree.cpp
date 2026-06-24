class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }

private:
    bool validate(TreeNode* node, long long mn, long long mx) {
        if (!node) return true;

        if (node->val <= mn || node->val >= mx) return false;

        return validate(node->left, mn, node->val) &&
               validate(node->right, node->val, mx);
    }
};