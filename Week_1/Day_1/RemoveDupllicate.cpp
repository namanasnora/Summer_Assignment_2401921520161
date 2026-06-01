class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = 0;
        while (i < n)
        {
            if (nums[j] != nums[i])
            {
                swap(nums[i], nums[j + 1]);
                j++;
            }
            i++;
        }
        return j + 1;
    }
};