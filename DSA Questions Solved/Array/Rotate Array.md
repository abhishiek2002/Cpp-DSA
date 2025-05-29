# Rotate Array

👉 <a href="https://leetcode.com/problems/rotate-array">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k%size;

    // First approach
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.begin() + k);
        // reverse(nums.begin() + k, nums.end());
    
    // Second approach
        if(k>0){
            vector<int> arr;
            for(int i=0; i<k; i++){
                arr.push_back(nums[size-k+i]);
            }

            int j=0;
            for(int i=0; i<size; i++){
                swap(nums[i], arr[j%k]);
                j++;
            }
        }
    }    
};
```
