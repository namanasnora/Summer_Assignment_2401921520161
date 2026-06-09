class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.length();
        int m = p.length();
        if (m > n)
        {
            return {};
        }
        vector<int> ans;
        vector<int> s_freq(26, 0);
        vector<int> p_freq(26, 0);
        for (char &ch : p)
        {
            p_freq[ch - 'a']++;
        }
        int i = 0, j = 0;
        while (j < n)
        {
            s_freq[s[j] - 'a']++;
            if (j - i + 1 > m)
            {
                s_freq[s[i] - 'a']--;
                i++;
            }
            if (s_freq == p_freq)
            {
                ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};