# Search In A 2D Array II.md

👉 <a href="https://leetcode.com/problems/search-a-2d-matrix-ii">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int startRow = 0, endCol = col-1;

        while(startRow<row && endCol>=0){
            int element = matrix[startRow][endCol];

            if(element == target) return true;
            else if (element < target) startRow++;
            else endCol--;
        }

        return false;
    }
};
```
