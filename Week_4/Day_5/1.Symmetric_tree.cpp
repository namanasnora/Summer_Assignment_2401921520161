class Solution
{
public:
    bool ismirror(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
            return 1;
        if (left == NULL || right == NULL)
            return false;

        if (left->val != right->val)
            return 0;
        return ismirror(left->left, right->right) && ismirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode *root)
    {
        return ismirror(root->left, root->right);
    }
};