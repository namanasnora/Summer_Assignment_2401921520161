class Solution
{
public:
    void helper(vector<string> &v, string s, int open, int close)
    {
        if (open == 0 && close == 0)
        {
            v.push_back(s);
            return;
        }
        if (close > 0)
        {
            helper(v, s + ")", open, close - 1);
        }
        if (open > 0)
        {
            helper(v, s + "(", open - 1, close + 1);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        helper(res, "", n, 0);
        return res;
    }
};