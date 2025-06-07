# isSorted Array

## 👉 Problem:
```txt
Find out given array is sorted in ascending order or not using recursion.
```
```cpp
#include <bits/stdc++.h> 
#include <vector>
#include <string>
using namespace std;

bool isSorted(int arr[], int size) {
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]) return false;
    return isSorted(arr + 1, size-1);
}

int main() {
    int arr[] = {1,2,3,7,5};
    
    bool ans = isSorted(arr, 5);
    
    if(ans){
        cout<<"Array is sorted";
    } else{
        cout<<"Array is not sorted";
    }
    return 0;
}
```

Your Output
```txt
Array is not sorted
```
