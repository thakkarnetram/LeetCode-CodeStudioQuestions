class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (auto it : s)
        {
            if (it == '(' || it == '[' || it == '{')
            {
                stk.push(it);
            }
            else
            {
                if (stk.empty() || stk.top() == '(' && it != ')' || stk.top() == '{' && it != '}' || stk.top() == '[' && it != ']')
                {
                    return false;
                }
                else
                    stk.pop();
            }
        }
        return stk.empty();
    }
};