class Solution
{
public:
    string longestPalindrome(string str)
    {
        int length = 0;
        int n = str.size();
        int start;
        for (int k = 0; k < n; k++)
        {
            int count = 1;
            int tStart = k;
            int i = k - 1;
            int j = k + 1;
            while (i >= 0 && j < n && str[i] == str[j])
            {
                count += 2;
                tStart = i;
                i--;
                j++;
            }
            if (count > length)
            {
                length = count;
                start = tStart;
            }

            if (k > 0 && str[k - 1] == str[k])
            {
                count = 2;
                tStart = k - 1;

                i = k - 2;
                j = k + 1;

                while (i >= 0 && j < n && str[i] == str[j])
                {
                    count += 2;
                    tStart = i;
                    i--;
                    j++;
                }
                if (count > length)
                {
                    length = count;
                    start = tStart;
                }
            }
        }
        return str.substr(start, length);
    }
};