# Check Palindrome
---

## Code:
```cpp
#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(string &s, int start, int end) {
    
    // base condition
    if(start > end) {
        return true;
    }
    
    // recurrence relation
    if(s[start] != s[end]) return false;
    
    return isPalindrome(s, start+1, end-1);
}

int main() {
    string s;
    
    getline(cin,s);
    
    int size = s.length();
    
    if(isPalindrome(s,0, size-1)){
        cout<<"String "<<s<<" is palindrome";
    } else {
        cout<<"String "<<s<<" is not palindrome";
    }
    
    return 0;
}
```
---
## Sample Input:
```txt
cooc
```

## Your Output:
```txt
String cooc is palindrome
```
