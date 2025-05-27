# Selection Sort Algo

<a href="https://www.naukri.com/code360/problems/selection-sort_981162">Coding Ninja Question Link </a>

```cpp
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
```
