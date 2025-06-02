# Spiral Matrix

👉 <a href="https://leetcode.com/problems/spiral-matrix">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size(); // no. of rows
        int col = matrix[0].size(); // no. of cols

        int count = 0;
        int totalEl = row*col;

        // indexing
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        int i=0, j=0;
        while(count<totalEl){

            // print starting row

            for(int index=startCol; count<totalEl && index<=endCol; index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            // print ending col

            for(int index=startRow; count<totalEl && index<=endRow; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            // print ending row

            for(int index=endCol; count<totalEl && index>=startCol; index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            // print starting Col

            for(int index=endRow; count<totalEl && index>=startRow; index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;

        }

        return ans;
        
    }
};
```
