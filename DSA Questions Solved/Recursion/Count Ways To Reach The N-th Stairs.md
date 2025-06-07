# Count Ways To Reach The N-th Stairs

👉 <a href="https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650">Coding Ninjas Problem Statement</a>

```cpp
#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    if (nStairs == 0) return 1;
    if (nStairs == 1) return 1;
    else {
        // return countDistinctWays(nStairs-2) + countDistinctWays(nStairs-1);
        int currentStairWays = 0, previousStairWay = 1, secondPreviousStairWay = 1;
        int mod = pow(10,9) + 7;
        for(int i=2; i<=nStairs; i++){
            currentStairWays = (previousStairWay + secondPreviousStairWay)%mod;
            secondPreviousStairWay = previousStairWay;
            previousStairWay = currentStairWays;
        }
        return currentStairWays;
    }
}
```
