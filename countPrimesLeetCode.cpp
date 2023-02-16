// Time complexity : O(n *log(log n))

//                       Space complexity : O(n)

// Code
class Solution
{
public:
    int countPrimes(int n)
    {
        int cnt = 0;
        vector<bool> prime(n + 1, true);
        // n+1 means vector starts from '2' and true means every number
        // is considered PRIME in starting
        prime[0] = prime[1] = false; // 0 and 1 are marked as false
        // cause they aren't prime numbers
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                cnt++;
                for (int j = 2 * i; j < n; j = j + i)
                {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};