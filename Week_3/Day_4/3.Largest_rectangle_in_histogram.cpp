class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size(), max_area = 0;
        int nse, pse, element;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                element = heights[st.top()];
                st.pop();
                nse = i;
                pse = st.empty() ? -1 : st.top();

                max_area = max(max_area, element * (nse - pse - 1));
            }
            st.push(i);
        }
        while (!st.empty())
        {
            nse = n;
            element = heights[st.top()];
            st.pop();
            pse = st.empty() ? -1 : st.top();

            max_area = max(max_area, element * (nse - pse - 1));
        }
        return max_area;
    }
};