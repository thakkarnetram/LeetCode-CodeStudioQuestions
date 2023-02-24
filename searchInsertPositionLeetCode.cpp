// T.C = > O(log n)
// S.C = > O(1)

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int count = nums.size();
        if (target > nums[count - 1])
            return count;
        if (target < nums[0])
            return 0;
        int start = 0, end = count - 1, mid = -1;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return end + 1;
    }
};