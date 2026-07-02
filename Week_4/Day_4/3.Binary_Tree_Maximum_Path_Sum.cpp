class Solution
{
public:
    int dfs(TreeNode *root, int &ans)
    {
        if (!root)
            return 0;

        int L = max(0, dfs(root->left, ans));
        int R = max(0, dfs(root->right, ans));

        ans = max(ans, root->val + L + R);

        return root->val + max(L, R);
    }

    int maxPathSum(TreeNode *root)
    {
        int ans = INT_MIN;
        dfs(root, ans);
        return ans;
    }
};