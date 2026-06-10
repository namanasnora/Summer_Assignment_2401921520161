class Solution
{
public:
    vector<int> buildLPS(string pat)
    {
        int n = pat.size();
        vector<int> lps(n, 0);
        int i = 1, j = 0;
        while (i < n)
        {
            if (pat[i] == pat[j])
            {
                lps[i++] = ++j;
            }
            else
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    lps[i++] = 0;
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle)
    {
        vector<int> lps = buildLPS(needle);
        int i = 0, j = 0;
        while (i < haystack.size())
        {
            if (haystack[i] == needle[j])
            {
                i++;
                j++;
                if (j == needle.size())
                    return i - j;
            }
            else
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return -1;
    }
};