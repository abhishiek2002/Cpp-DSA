# Power Of 2

```cpp
#include <bits/stdc++.h>
using namespace std;

long long int power2(int n){
    if(n==0) return 1;
    // if(n==1) return 2;
    
    if(n&1){
        // n is odd
        return 2*power2(n/2)*power2(n/2);
    } else {
        // n is even
        return power2(n/2)*power2(n/2);
    }
    
}

int main() {
	
    int n;
    
    cin>>n;
    
    cout<<power2(n);
	
	return 0;
}
```

Sample Input
```text
10
```
Your Output
```text
1024
```
