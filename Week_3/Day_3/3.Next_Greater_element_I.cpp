class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums)
    {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums)
        {
            while (s.size() && s.top() < n)
            {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums)
        {
            if (m.count(n))
            {
                ans.push_back(m[n]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};