class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int start = nums.size();
        for (int i = 0; i < start; ++i)
        {
            int sumLeft = 0, sumRight = 0;
            for (int j = 0; j < start; ++j)
            {
                if (j < i)
                    sumLeft += nums[j];
                else if (j > i)
                    sumRight += nums[j];
            }
            if (sumLeft == sumRight)
                return i;
        }
        return -1;
    }
};