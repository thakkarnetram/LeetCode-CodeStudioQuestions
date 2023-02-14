// T.C => O(nm)

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int cnt = 0;
        int total = row * col;
        int startRow = 0, startCol = 0;
        int endRow = row - 1, endCol = col - 1;
        while (cnt < total)
        {
            // starting Row
            for (int index = startCol; cnt < total && index <= endCol; index++)
            {
                ans.push_back(matrix[startRow][index]);
                cnt++;
            }
            startRow++;
            // Ending Column
            for (int index = startRow; cnt < total && index <= endRow; index++)
            {
                ans.push_back(matrix[index][endCol]);
                cnt++;
            }
            endCol--;
            // Ending Row
            for (int index = endCol; cnt < total && index >= startCol; index--)
            {
                ans.push_back(matrix[endRow][index]);
                cnt++;
            }
            endRow--;
            // starting Column
            for (int index = endRow; cnt < total && index >= startRow; index--)
            {
                ans.push_back(matrix[index][startCol]);
                cnt++;
            }
            startCol++;
        }
        return ans;
    }
};