# Search In A Sorted Rotated Array

👉 <a href="https://leetcode.com/problems/search-in-rotated-sorted-array/" > Leetcode Question Link </a>
```cpp
class Solution {
private:
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

    int binarySearch(vector<int>& nums, int left, int right, int target){
        int index = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target) {
                index = mid;
                break;
            }
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return index;
    }
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int pivot = getPivot(nums, size);

        if(target >= nums[pivot] && target <= nums[size-1]){
            return binarySearch(nums, pivot, size-1, target);
        }
        else{
            return binarySearch(nums, 0, pivot-1, target);
        }
    }
};
```
