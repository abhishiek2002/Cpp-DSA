# 2 Sum Of Array
---
## 👉 Problem:

```txt
Find the sum of all integers of given integer array using recursion
```
---
## Code

```cpp
#include <bits/stdc++.h> 
using namespace std;

int arraySum(int arr[], int size) {
    
    if(size == 0 || size == 1){
        return (size == 0) ? 0 : arr[0];
    }
    
    int sum = arr[0] + arraySum(arr + 1, size-1);
    
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    
    int sum = arraySum(arr, 5);
    
    
    cout<<"Sum of array is "<<sum;
    
    return 0;
}
```
---
## Your Output
```txt
Sum of array is 15
```
---
