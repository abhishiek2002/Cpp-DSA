# Reverse String
---
## Code:
```cpp
#include <bits/stdc++.h> 
using namespace std;

void reverseString(string &s, int start, int end) {
    
    // base condition
    if(start > end) {
        return;
    }
    
    // recurrence relation
    swap(s[start], s[end]);
    
    reverseString(s, start+1, end-1);
}

int main() {
    string s;
    
    getline(cin,s);
    
    int size = s.length();
    
    int i=0;
    reverseString(s, 0, size-1);
    
    cout<<s<<endl;
    
    return 0;
}
```
---
## Sample Input:
```txt
askj dsl jdk
```
## Your Output:
```txt
kdj lsd jksa
```
