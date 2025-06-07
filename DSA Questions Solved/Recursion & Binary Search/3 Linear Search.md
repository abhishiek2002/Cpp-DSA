# Linear Search
---
## 👉 Problem:
```txt
Find if target exist in the given array using recursion with linear search.
```
---
## Code:

```cpp
#include <bits/stdc++.h> 
using namespace std;

bool linearSearch(int arr[], int size, int target) {
    
    // base condition
    if(size == 0) return false;
    
    // recursion relation
    
    if(arr[0] == target) return true;
    
    bool ans = linearSearch(arr + 1, size-1, target);
    
    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5};
    
    int target = 1;
    
    bool ans = linearSearch(arr, 5, target);
    
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
---
