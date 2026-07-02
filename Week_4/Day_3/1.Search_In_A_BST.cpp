class Solution
{
public:
    TreeNode *search(TreeNode *root, int val)
    {
        if (!root)
            return NULL;
        if (root->val == val)
            return root;

        if (root->val < val)
            return search(root->right, val);
        else
            return search(root->left, val);
    }

    TreeNode *searchBST(TreeNode *root, int val)
    {
        return search(root, val);
    }
};