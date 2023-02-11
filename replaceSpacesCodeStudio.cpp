// T.C - O(n)

// S.C - O(n)

#include <bits/stdc++.h>
string replaceSpaces(string &str)
{

    string temp = "";

    for (int j = 0; j < str.length(); j++)
    {

        if (str[j] == ' ')
        {

            temp.push_back('@');

            temp.push_back('4');

            temp.push_back('0');
        }

        else
            temp.push_back(str[j]);
    }

    return temp;
}
