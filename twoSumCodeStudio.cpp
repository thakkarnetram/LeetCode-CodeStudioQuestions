#include <iostream>
using namespace std;
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{
    // Write your code here.
    // In this solution the T.C exceeds than 1s.
    pair<int, int> p;
    vector<pair<int, int>> ans;
    sort(arr.begin(), arr.end());
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (arr[s] + arr[e] == target)
        {
            p.first = arr[s];
            p.second = arr[e];
            ans.push_back(p);
            s++;
            e--;
        }
        else if (arr[s] + arr[e] > target)
        {
            e--;
        }
        else
            s++;
    }
    if (ans.empty())
    {
        ans.push_back({-1, -1});
        return ans;
    }
    return ans;
}