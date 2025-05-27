# Bubble Sort Algo

👉 <a href="https://www.naukri.com/code360/problems/bubble-sort_980524">Coding Ninja Question Link</a>

## Optimized (best case O(n) )
```cpp
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // using swapped for optimization
    for(int i=1; i<n; i++){
        int swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false) break;
    }
}

```

## Not Optimized (best case O(n^2) )

```cpp
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```
