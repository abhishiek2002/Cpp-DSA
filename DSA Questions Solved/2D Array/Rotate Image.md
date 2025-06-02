# Rotate Image

👉 <a href="">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        

        // transpose matrix
        int i=0;
        while(i<row){
            for(int j=i+1; j<col; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
            i++;
        }

        // swap first col and last col and so on

        int firstCol = 0, lastCol = col-1;

        while(firstCol<lastCol){
            for(int i=0; i<row; i++){
                swap(matrix[i][firstCol], matrix[i][lastCol]);
            }
            firstCol++;
            lastCol--;
        }

    }
};
```
