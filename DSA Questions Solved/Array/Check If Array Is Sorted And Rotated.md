# Check If Array Is Sorted And Rotated

👉 <a href="https://leetcode.com/problems/check-if-array-is-sorted-and-rotated">Leetcode Problem Statement</a>

```cpp
class Solution {
public:
    bool check(vector<int>& nums) {
        // if array is sorted and rotated then there is only one place in array where monotonic non-decreasing order will disturb
        // {3,4,5,1,2} in this array at index i=2 , arr[i] > arr[(i+1)%size] , which only one place.
        // {1,1,1} in that type of array where all numbers are same then count of disturbing point will be 0.
        // And in all other cases count will be more than 1.

        int size = nums.size();
        int count=0;
        for(int i=0; i<size; i++){
            if(nums[i] > nums[(i+1)%size]){
                count++;
            }
        }

        if(count == 1 || count == 0) return true;
        return false;
    }
};
```
