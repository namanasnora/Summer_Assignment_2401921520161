void inorder(TreeNode *temp, vector<int> &ans)
{
    if (temp == NULL)
        return;
    inorder(temp->left, ans);
    ans.push_back(temp->val);
    inorder(temp->right, ans);
}

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        TreeNode *temp = root;
        vector<int> ans;
        inorder(temp, ans);
        return ans;
    }
};