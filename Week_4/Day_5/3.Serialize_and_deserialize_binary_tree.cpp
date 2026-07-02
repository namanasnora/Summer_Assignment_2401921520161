class Codec
{
public:
    void serializeHelper(TreeNode *root, string &s)
    {
        if (root == NULL)
        {
            s += "null,";
            return;
        }

        s += to_string(root->val) + ",";
        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    string serialize(TreeNode *root)
    {
        string s;
        serializeHelper(root, s);
        return s;
    }

    TreeNode *deserializeHelper(vector<string> &v, int &i)
    {
        if (v[i] == "null")
        {
            i++;
            return NULL;
        }

        TreeNode *root = new TreeNode(stoi(v[i++]));

        root->left = deserializeHelper(v, i);
        root->right = deserializeHelper(v, i);

        return root;
    }

    TreeNode *deserialize(string data)
    {
        vector<string> v;
        string temp;

        for (char c : data)
        {
            if (c == ',')
            {
                v.push_back(temp);
                temp.clear();
            }
            else
            {
                temp += c;
            }
        }

        int i = 0;
        return deserializeHelper(v, i);
    }
};