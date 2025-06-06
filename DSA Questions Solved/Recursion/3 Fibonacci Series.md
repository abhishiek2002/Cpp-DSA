# Fibonacci Series

Problem -> Return nth fibonacci number

```cpp
#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    
    return fibo(n-1) + fibo(n-2);
}

int main() {
	
    int n;
    
    cin>>n;
    
    cout<<n<<"th fibonacci number is : "<<fibo(n);
	
	return 0;
}
```
Sample Input
```text
8
```
Your Output
```txt
8th fibonacci number is : 13
```
