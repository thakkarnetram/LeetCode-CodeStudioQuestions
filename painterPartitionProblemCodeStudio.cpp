bool isPossibleSol(vector<int> &a, int n, int m, int mid)
{
    int painter = 1;
    int areaPainted = 0;
    for (int i = 0; i < n; i++)
    {
        if (areaPainted + a[i] <= mid)
            areaPainted += a[i];
        else
        {
            painter++;
            if (painter > m || a[i] > mid)
                return false;
            areaPainted = a[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int m)
{
    //    Write your code here.
    int start = 0, end = 0, ans = -1, sum = 0, n = boards.size();
    for (auto x : boards)
        sum += x;
    end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSol(boards, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}