class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        int maxsum = 0;
        for (int i = 0; i < k; i++)
        {
            maxsum += nums[i];
        }
        int window_sum = maxsum;
        for (int i = k; i < n; i++)
        {
            window_sum += nums[i] - nums[i - k];

            maxsum = max(maxsum, window_sum);
        }
        return (double)maxsum / k;
    }
};