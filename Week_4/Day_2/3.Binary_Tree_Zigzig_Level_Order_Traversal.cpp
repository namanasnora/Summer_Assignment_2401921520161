class Solution
{
public:
    void zigzag(TreeNode *root, vector<int> &abc, vector<vector<int>> &ans)
    {
        stack<TreeNode *> s1; // L to R
        stack<TreeNode *> s2; // R to L
        s1.push(root);
        while (!s1.empty() || !s2.empty())
        {
            if (!s1.empty())
            {
                int n = s1.size();
                while (n--)
                {
                    TreeNode *temp = s1.top();
                    s1.pop();
                    abc.push_back(temp->val);
                    if (temp->left)
                        s2.push(temp->left);
                    if (temp->right)
                        s2.push(temp->right);
                }
            }
            else
            {
                int n = s2.size();
                while (n--)
                {
                    TreeNode *temp = s2.top();
                    s2.pop();
                    abc.push_back(temp->val);
                    if (temp->right)
                        s1.push(temp->right);
                    if (temp->left)
                        s1.push(temp->left);
                }
            }
            ans.push_back(abc);
            abc.clear();
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        vector<int> abc;
        if (!root)
            return ans;
        zigzag(root, abc, ans);
        return ans;
    }
};