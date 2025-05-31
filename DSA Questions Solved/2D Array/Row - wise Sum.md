# Row - wise Sum

```cpp
#include <iostream>
using namespace std;

int main() 
{
  int chars[3][3] = {{1,2,3},{2,12,1},{5,13,21}};
  int ans[3];
  
  for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0; j<3; j++){
      sum += chars[i][j];
    }
    ans[i] = sum;
  }
  
  for(auto i: ans){
    cout<<i<<" ";
  }
 

  return 0;
}
```
Output:

6 15 39 
