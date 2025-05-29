# Reverse The Array

<a href="https://www.naukri.com/code360/problems/reverse-the-array_1262298?interviewProblemRedirection=true&search=&leftPanelTabValue=PROBLEM&count=25&sort_entity=order&sort_order=ASC&customSource=studio_nav&page=2&attempt_status=COMPLETED">Coding Ninja Problem Statement</a>

```cpp
void reverseArray(vector<int> &arr , int m) {
    int start=m+1, end=arr.size()-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
```
