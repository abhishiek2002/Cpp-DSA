# Peak Index In A Mountain Array

👉 <a href="https://leetcode.com/problems/peak-index-in-a-mountain-array/" >Leetcode Question Link</a>

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();
        int left = 0, right = size-1;
        int mid = left + (right-left)/2;
        while(left<=right) {
            mid = left + (right-left)/2;
            if(mid == 0) mid++;
            else if (mid == size-1) mid--;

            if((arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1])){
                return mid;
            }

            else if ((arr[mid] > arr[mid-1])  && (arr[mid] < arr[mid+1])){
                left = mid + 1;
            }

            else{
                right = mid - 1;
            }
        }

        return mid;
    }
};
```
