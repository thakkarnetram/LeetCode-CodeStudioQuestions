// T.c => O(n2)
// S.c => O(1)

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> temp(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < row; col++)
            {
                swap(matrix[row][col], matrix[col][row]);
            }
        }
        for (int row = 0; row < n; row++)
        {
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};