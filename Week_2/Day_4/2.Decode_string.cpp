class Solution
{
public:
    string solve(string &s, int &i)
    {
        int num = 0;
        string word;
        for (; i < s.size(); i++)
        {
            if (s[i] == '[')
            {
                string result = solve(s, ++i);
                for (; num > 0; num--)
                    word += result;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                num = 10 * num + (s[i] - '0');
            }
            else if (s[i] == ']')
            {
                return word;
            }
            else
            {
                word += s[i];
            }
        }
        return word;
    }
    string decodeString(string s)
    {
        int i = 0;
        return solve(s, i);
    }
};