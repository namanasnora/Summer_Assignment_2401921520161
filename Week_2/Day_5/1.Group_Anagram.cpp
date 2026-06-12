class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (string s : strs)
        {
            string str = s;
            sort(begin(str), end(str));
            mp[str].push_back(s);
        }

        for (auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};