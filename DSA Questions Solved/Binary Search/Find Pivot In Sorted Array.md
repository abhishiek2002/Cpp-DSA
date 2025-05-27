# Find Pivot In Sorted Array

```cpp
    int getPivot(vector<int>& nums, int size){
        int left = 0, right = size-1;
        int mid = left + (right-left)/2;

        while(left<right){
            if(nums[mid] >= nums[0]){
                left = mid + 1;
            }
            else{
                right = mid;
            }
            mid = left + (right-left)/2;
        }
        return left;
    }
```
