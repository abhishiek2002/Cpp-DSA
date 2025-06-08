# Merge Sort Algorithm
---
## My Code:
```cpp
#include <bits/stdc++.h> 
using namespace std;

void merge(int arr[], int start, int end){
    
    int mid = start + (end-start)/2;
    
    vector<int> ans;
    
    int s1= start, s2 = mid+1;
    
    while(s1<=mid && s2<=end){
        if(arr[s1] <= arr[s2]){
            ans.push_back(arr[s1]);
            s1++;
        }
        else{
            ans.push_back(arr[s2]);
            s2++;
        }
    }
    
    while(s1<=mid){
        ans.push_back(arr[s1]);
        s1++;
    }
    
    while(s2<=end){
        ans.push_back(arr[s2]);
        s2++;
    }
    
    for(int i: ans){
        arr[start] = i;
        start++;
    }
}

void mergeSort(int arr[], int start, int end) {
    
    int mid = start + (end-start)/2;
    
    // divide until array size become 1 i.e. start == mid == end
    if(start != mid){
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
    }
    
    // if size become 1 then start merging the sorted arrays
    merge(arr, start, end);
}

int main() {
    int arr[] = {234,435,3,23,677,4,54343,23,232};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int start = 0, end = size-1;
    
    mergeSort(arr, start, end);
    
    for(int i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}
```
---
## Your Output:
```txt
3 4 23 23 232 234 435 677 54343 
```
---

## Book Code:

```cpp
#include <bits/stdc++.h> 
using namespace std;

void merge(int arr[], int start, int end){
    
    int mid = start + (end-start)/2;
    
    vector<int> ans;
    
    int s1= start, s2 = mid+1;
    
    while(s1<=mid && s2<=end){
        if(arr[s1] <= arr[s2]){
            ans.push_back(arr[s1]);
            s1++;
        }
        else{
            ans.push_back(arr[s2]);
            s2++;
        }
    }
    
    while(s1<=mid){
        ans.push_back(arr[s1]);
        s1++;
    }
    
    while(s2<=end){
        ans.push_back(arr[s2]);
        s2++;
    }
    
    for(int i: ans){
        arr[start] = i;
        start++;
    }
}

void mergeSort(int arr[], int start, int end) {
    
    if(start>=end){
        return;
    }
    
    int mid = start + (end-start)/2;
    
    // sort left part
    mergeSort(arr, start, mid);
    
    // sort right part
    mergeSort(arr, mid + 1, end);
    
    // merge
    merge(arr, start, end);
    
    
}

int main() {
    int arr[] = {234,435,3,23,677,4,54343,23,232};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int start = 0, end = size-1;
    
    mergeSort(arr, start, end);
    
    for(int i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}
```
---

## Book Code 2:

Here merging is done by first copying array into two sorted array then merge them

```cpp
#include <bits/stdc++.h> 
using namespace std;

void merge(int arr[], int start, int end){
    
    int mid = start + (end-start)/2;
    
    int len1 = mid-start+1;
    int len2 = end-mid;
    
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    // copying to first array
    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    
    // copying to second array
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    
    // merge
    
    mainArrayIndex = start;
    int index1 = 0, index2 = 0;
    while(index1<len1 && index2<len2){
        if(first[index1] <= second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    
}

void mergeSort(int arr[], int start, int end) {
    
    if(start>=end){
        return;
    }
    
    int mid = start + (end-start)/2;
    
    // sort left part
    mergeSort(arr, start, mid);
    
    // sort right part
    mergeSort(arr, mid + 1, end);
    
    // merge
    merge(arr, start, end);
    
    
}

int main() {
    int arr[] = {234,435,3,23,677,4,54343,23,232};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int start = 0, end = size-1;
    
    mergeSort(arr, start, end);
    
    for(int i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}
```
---
