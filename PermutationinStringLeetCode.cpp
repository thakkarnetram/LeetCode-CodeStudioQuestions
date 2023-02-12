// Time complexity:
// O(m+n)

// Space complexity:
// O(n)

class Solution
{
private:
    bool check(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        int cnt1[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            cnt1[index]++;
        }
        int i = 0;
        int window = s1.length();
        int cnt2[26] = {0};
        while (i < window && i < s2.length())
        {
            int index = s2[i] - 'a';
            cnt2[index]++;
            i++;
        }
        if (check(cnt1, cnt2))
            return 1;
        while (i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            cnt2[index]++;
            char oldChar = s2[i - window];
            index = oldChar - 'a';
            cnt2[index]--;
            i++;
            if (check(cnt1, cnt2))
                return 1;
        }
        return 0;
    }
};