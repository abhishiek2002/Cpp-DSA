# Quick Sort
---

## Code:
```cpp
#include <bits/stdc++.h> 
using namespace std;

void quickSort(int arr[], int start, int end) {
    
    // base condition
    if(start >= end){
        return ;
    }
    
    // recursion processing
    int pivot = start;
    
    int i=start , j=end;
    while(i<j){
        if(arr[i] <= arr[pivot]){
            i++;
        }
        if(arr[j] >= arr[pivot]){
            j--;
        }
        if(i<j && arr[i] > arr[pivot] && arr[j] < arr[pivot]){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    
    swap(arr[j], arr[pivot]);
    
    // recursion relation
    quickSort(arr, start, j-1);
    quickSort(arr, i, end);
}

int main() {
    int arr[] = {234,435,3,23,4,54343,23,232};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int start = 0, end = size-1;
    
    quickSort(arr, start, end);
    
    for(int i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}
```
---
## Your Output:
```txt
3 4 23 23 232 234 435 54343 
```
