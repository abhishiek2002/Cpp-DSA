# Binary Search In Array Using Recursion
---
## 👉 Problem:
```txt
Find if target exist in given array using recursion and binary search
```
---
## Code:

```cpp
#include <bits/stdc++.h> 
using namespace std;

bool binarySearch(int arr[], int start, int end, int target) {
    
    // base condition
    if(start>end) return false;
    
    // recursion relation
    
    bool ans;
    
    int mid = (start+end)/2;
    
    if(arr[mid] == target) return true;
    
    else if(arr[mid] > target) {
        end = mid-1;
        ans = binarySearch(arr, start, end, target);
    }
    
    else {
        start = mid+1;
        ans = binarySearch(arr, start, end, target);
    }
    
    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5};
    
    int target = 2;
    int start = 0, end = 4;
    bool ans = binarySearch(arr, start, end, target);
    
    if(ans){
        cout<<"Target is found";
    } else{
        cout<<"Target is not found";
    }
    
    return 0;
}
```
---
## Your Output:
```txt
Target is found
```
