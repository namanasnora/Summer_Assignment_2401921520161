class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[n - 1];
        string result = "";

        int len = min(first.length(), last.length());

        for (int i = 0; i < len; i++)
        {
            if (first[i] != last[i])
                break;
            result += first[i];
        }
        return result;
    }
};