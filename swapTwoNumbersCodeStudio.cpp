#include <bits/stdc++.h>
#include <utility>

pair<int, int> swap(pair<int, int> swapValues)
{
    // Write your code here.
    int start = 0, end = start + 1;
    for (int i = 0; i < end; i++)
    {
        swap(swapValues.first, swapValues.second);
    }
    return swapValues;
}