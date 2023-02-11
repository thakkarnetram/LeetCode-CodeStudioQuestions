// T.C - O(n)

// S.C - O(1)

class Solution
{
public:
    string removeOccurrences(string str, string part)
    {
        while (str.length() != 0 && str.find(part) < str.length())
        {
            str.erase(str.find(part), part.length());
        }
        return str;
    }
};