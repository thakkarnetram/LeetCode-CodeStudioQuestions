#include <bits/stdc++.h>
bool checkPalindrome(string s)
{
    // Write your code here.
    int n = s.length();
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
            start++;
        else if (!isalnum(s[end]))
            end--;
        else
        {
            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}