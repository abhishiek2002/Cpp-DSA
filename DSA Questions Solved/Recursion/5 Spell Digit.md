# Spell Digit

## Problem Statement
```md
You are given an integer n 
For example n = 678.
You have to print output 'Six Seven Eight'
```
## Code
```cpp
#include <bits/stdc++.h> 
#include <vector>
#include <string>
using namespace std;

void spellNum(int n) {
    vector<string> digits = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    if(n==0){
        return;
    }
    
    int rem = n%10;
    n = n/10;
    spellNum(n);
    cout<<digits[rem]<<" ";
}

int main() {
    int n;
    cin>>n;
    if(n==0) cout<<"Zero"<<endl;
    else spellNum(n);
}
```

Sample Input
```txt
034279
```
Your Output
```txt
Three Four Two Seven Nine 
```
