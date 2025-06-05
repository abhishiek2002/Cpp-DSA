# Jaggered Array

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
      int m;
      cin>>m;
      // creating dynamic 2d array
      int **arr2d = new int*[m];
  
      for(int i=0; i<m; i++){
        arr2d[i] = new int[i+1];
      }
      
      // taking input
      
      for(int i=0; i<m; i++){
        for(int j=0; j<=i; j++){
          cin>>arr2d[i][j];
        }
      }
      
      // print
      
      for(int i=0; i<m; i++){
        for(int j=0; j<=i; j++){
          cout<<arr2d[i][j]<<" ";
        }
        cout<<endl;
      }
      
      
    for(int i=0; i<m; i++){
        delete[] arr2d[i];
    }
    
    delete[] arr2d;
  
  return 0;
}
```

Sample Input
```text
4 1 2 3 4 5 6 7 8 9 0
```
Your Output
```text
1 
2 3 
4 5 6 
7 8 9 0
```
