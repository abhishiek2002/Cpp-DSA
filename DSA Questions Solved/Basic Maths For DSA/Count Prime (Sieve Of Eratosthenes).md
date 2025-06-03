# Count Prime (Sieve Of Eratosthenes)

👉 <a href="https://leetcode.com/problems/count-primes">Leetcode Problem Statement</a>

---
✅ Steps (Basic Sieve):
Suppose N = 30:

Create a boolean array isPrime[0...N], initialize all values to true except 0 and 1.

Start with the first prime number p = 2.

For p = 2, mark all multiples of 2 (like 4, 6, 8...) as false (not prime).

Move to the next unmarked number (which is the next prime), and repeat the step.
---

```cpp
class Solution {
public:
    int countPrimes(int n) {
        
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++){

            if(prime[i]){
                count++;

                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }

        return count;
    }
};
```
