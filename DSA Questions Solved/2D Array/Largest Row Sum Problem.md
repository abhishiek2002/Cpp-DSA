# Largest Row Sum Problem

```cpp
#include <iostream>
using namespace std;

int main() 
{
  int chars[3][3] = {{1,2,3},{2,12,1},{5,13,21}};
  int ans[3];
  int maxSum=-129;
  int largestRow;
  
  for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0; j<3; j++){
      sum += chars[i][j];
    }
    if(maxSum < sum){
      maxSum = sum;
      largestRow = i+1;
    }
  }
  
  cout<<maxSum;
  cout<<"\nLargest sum row is -> "<<largestRow;
  
  // for(auto i: ans){
  //   cout<<i<<" ";
  // }
 

  return 0;
}
```

---

Output:

39
Largest sum row is -> 3
