# Subsequences Of A String
---
👉 <a href="https://www.naukri.com/code360/problems/subsequences-of-string_985087">Coding Ninja Problem Statement</a>

### Note:- Problem is solved using inclusion-exclusion technique using recursion

---

## Code:

```cpp
#include <bits/stdc++.h> 
void solve(string &str, int index, string output, vector<string> &ans){

	// base case
	if(index == str.length()){
		// output should not empty
		if(!output.empty()) ans.push_back(output);
		return;
	}

	// recursion relation

	// exclusion
	solve(str, index + 1, output, ans);

	// inclusion
	output.push_back(str[index]);
	solve(str, index + 1, output, ans);
}
vector<string> subsequences(string str){
	
	vector<string> ans;
	string output;

	solve(str, 0, output, ans);
	return ans;
}
```
---
## Input:
```txt
ph
qghu
m
```
---
## Output:
```txt
h p ph 
g gh ghu gu h hu q qg qgh qghu qgu qh qhu qu u 
m
```
---
