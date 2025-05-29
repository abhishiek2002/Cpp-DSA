# Sum Of Two Arrays
<a href="https://www.naukri.com/code360/problems/sum-of-two-arrays_893186?interviewProblemRedirection=true&search=Sum%20Of%20Two&leftPanelTabValue=PROBLEM&count=25&sort_entity=order&sort_order=ASC&customSource=studio_nav">👉 Problem Statement Coding Ninja</a>

```cpp
#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int carry = 0;
	vector<int> ans;
	for(int i=1; i<=min(n,m); i++){
		int add = carry + a[a.size()-1] + b[b.size()-1];
		carry = add/10;
		add = add%10;
		ans.push_back(add);
		a.pop_back();
		b.pop_back();
	}

	while(n>m && a.size()>0){
		int add = carry + a[a.size()-1];
		add = add%10;
		carry = add/10;
		ans.push_back(add);
		a.pop_back();
	}

	while(n<m && b.size()>0){
		int add = carry + b[b.size()-1];
		add = add%10;
		carry = add/10;
		ans.push_back(add);
		b.pop_back();
	}

	if(carry != 0) ans.push_back(carry);

	reverse(ans.begin(), ans.end());
	return ans;
}
```
