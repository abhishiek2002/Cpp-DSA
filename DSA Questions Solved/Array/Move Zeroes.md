# Move Zeroes

👉 <a href="https://leetcode.com/problems/move-zeroes">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j= 0;
        int size = nums.size();

        while(i<nums.size()){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
            i++;
        }

        int zeroCount = size - j;

        for(int k = size-1; k >= size-zeroCount; k--){
            nums[k] = 0;
        }        
        }
};
```

```
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```
