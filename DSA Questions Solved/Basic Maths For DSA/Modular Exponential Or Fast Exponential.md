# Modular Exponential Or Fast Exponential

👉 <a href="https://www.naukri.com/code360/problems/modular-exponentiation_1082146">Coding Ninja Problem Statement</a>

```mathematica
a^b
if (b is even) ->  (a^(b/2))^2
if (b is odd)  ->  (a^(b/2))^2 * a
```

```cpp
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int res = 1;

	while(n>0){
		if(n&1){
			// odd
			res = (1LL * res * x%m)%m;  // typecast with 1 long long
		}
		x = (1LL * x%m * x%m)%m;
		n = n>>1; //divide by 2
	}
	return res;
}
```
