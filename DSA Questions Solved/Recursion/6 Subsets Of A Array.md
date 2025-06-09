# Subsets Of A Array
---
👉 <a href="https://leetcode.com/problems/subsets">Leetcode Problem Statement</a>

### Note:- Problem is solved using inclusion and exclusion
---
## Code:

```cpp
class Solution {
    void inclusionExclusion(vector<int>& nums, int index, vector<int> output, vector<vector<int>>& ans){
        // base condition
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }

        // exclusion
        inclusionExclusion(nums, index+1, output, ans);

        // inclusion
        output.push_back(nums[index]);
        inclusionExclusion(nums, index+1, output, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output = {};
        inclusionExclusion(nums, 0, output, ans);
        return ans;
    }
};
```
---
## Input:
```txt
nums = [1,2,3]
```

## Output:
```txt
[[],[3],[2],[2,3],[1],[1,3],[1,2],[1,2,3]]
```
