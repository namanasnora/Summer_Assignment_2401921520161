class Solution
{
public:
    TreeNode *construct(int index, int start, int end, vector<int> &inorder, vector<int> &preorder)
    {
        int pos;
        if (start > end)
            return NULL;
        TreeNode *temp = new TreeNode(preorder[index]);
        for (int i = start; i <= end; i++)
        {
            if (inorder[i] == preorder[index])
            {
                pos = i;
                break;
            }
        }
        temp->left = construct(index + 1, start, pos - 1, inorder, preorder);
        temp->right = construct(index + (pos - start) + 1, pos + 1, end, inorder, preorder);
        return temp;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return construct(0, 0, preorder.size() - 1, inorder, preorder);
    }
};