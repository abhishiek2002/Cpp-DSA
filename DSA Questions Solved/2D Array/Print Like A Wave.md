# Print Like A Wave

👉 <a href="https://www.naukri.com/code360/problems/print-like-a-wave_893268">Coding Ninja Problem Statement</a>

```cpp
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    int m=0;
    int n=0;
    while(m<mCols){
        // if m is even
        if(m%2 ==0){
            while(n<nRows){
                ans.push_back(arr[n][m]);
                n++;
            }
            n--;
        }
        // if m is odd 
        else{
            while(n>=0){
                ans.push_back(arr[n][m]);
                n--;
            }
            n++;
        }

        m++;
    }
    return ans;
}
```
