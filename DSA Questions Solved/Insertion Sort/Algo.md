# Insertion Sort Algorithm

👉 <a href="https://www.naukri.com/code360/problems/insertion-sort_3155179">Coding Ninja Question Link</a>

## First Approach (Best approach => swapping )
```cpp
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else {
                break;
            }
        }
    }
```

 ## Second approach

 After comparing in second for loop , instead of swapping shift it to the right if it is big then current number.
```cpp
    // for(int i=1; i<n; i++){
    //     int currentNumber = arr[i];
    //     int insertIndex = i;
    //     for(int j=i; j>0; j--){
    //         if(currentNumber < arr[j-1]){
    //             // shift to right a single element at a time
    //             arr[j] = arr[j-1];
    //             // decrementing insertIndex
    //             insertIndex--;
    //         }
    //         else {
    //             break;
    //         }
    //     }
    
    //     arr[insertIndex] = currentNumber;
    // }
```
## Third approach

First find insert index and then shift all element at a time using loop
```cpp
    // for(int i=1; i<n; i++){
    //     int currentNumber = arr[i];
    //     int insertIndex = i;
    //     // finding insertIndex
    //     for(int j=i; j>0; j--){
    //         if(currentNumber < arr[j-1]){
    //             insertIndex--;
    //         }
    //         else{
    //             break;
    //         }
    //     }

    //     // now inserting at that index by right shifting element between i and insertindex
        
    //     for(int k=i; k>insertIndex; k--){
    //         arr[k] = arr[k-1];
    //     }

    //     arr[insertIndex] = currentNumber; 
    // }
}
```
