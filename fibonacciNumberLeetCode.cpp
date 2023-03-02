class Solution
{
public:
    int fib(int Num)
    {
        if (Num == 0 || Num == 1)
        {
            return Num;
        }
        return fib(Num - 1) + fib(Num - 2);
    }
};