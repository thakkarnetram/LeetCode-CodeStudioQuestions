// solution 1
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
                nums[ans++] = nums[i];
        }
        return ans;
    }
};

// solution 2
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int start = 0, end = n - 1;
        if (n == 0)
            return 0;
        while (start <= end)
        {
            if (nums[start] == val)
                swap(nums[start], nums[end--]);
            else
                start++;
        }
        return start;
    }
};