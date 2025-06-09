# Letter Combinations of a Phone Number

👉 <a href="https://leetcode.com/problems/letter-combinations-of-a-phone-number">Leetcode Problem Statement</a>

---

### Solution Graph:

<img src="/DSA Questions Solved/Recursion/Letter Combination Of A Phone Number Solution Graph.png" />

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
digits = "23"
```
---

## Output:
```txt
["ad","ae","af","bd","be","bf","cd","ce","cf"]
```
