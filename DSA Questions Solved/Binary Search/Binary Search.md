# Binary Algorithm

```cpp
int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid; // Found the target
        }
        else if (arr[mid] < target) {
            start = mid + 1; // Search right half
        }
        else {
            end = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}

```
