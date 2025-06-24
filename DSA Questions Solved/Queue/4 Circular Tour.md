# Circular Tour

👉 Time -> O(n) & Space -> O(1)

## Approach  (Iske alawa aur bhi approach hai , pr yeh best hai)

`traverse at each petrol pump and calculate deficit(kami petrol ki) and balance (bacha hua petrol), and update start point to next petrol pump if balance goes negative.`
`After traversal , if balance (bacha hua petrol) and deficit (petrol ki kami) equal ho , mtlb bacha hua petrol sufficient hai kami puri krne ke liye toh return start point else -1`

```cpp
#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int n)
{
	int deficit = 0;
	int balance = 0;
	int start = 0;
	
	for(int i=0; i<n; i++){
		balance += petrol[i] - distance[i];
		if(balance < 0){
			deficit += balance;
			start = i+1;
			balance = 0;
		}
	}

	if(deficit + balance >= 0){
		return start;
	}
	else{
		return -1;
	}
}
```
