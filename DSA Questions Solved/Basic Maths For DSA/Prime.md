# Prime

```cpp
class Solution {
public:
    bool isPrime(int n){
    for(int i=2; i<n; i++){
      if(n%i == 0) return false;
    }
    return true;
  }
};
```
