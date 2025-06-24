# First Negative In Every Window
---
## Brute Force 

👉 Time -> O(n*k) & Space -> O(1)

```cpp
vector<int> firstNegative(vector<int> arr, int n, int k) {

// Brute Force Aproach	
	vector<int> ans;

	for(int i=0; i<n-k+1; i++){

		int j;
		for(j=i; j<k+i; j++){
			if(arr[j] < 0){
				ans.push_back(arr[j]);
				break;
			}
		}

		if(j == k+i){
			ans.push_back(0);
		}
	}

	return ans;
}
```

---

## Approach 2

`👉 Better Approach than 1 because we will use previous result of each window for fast computation`

```cpp
vector<int> firstNegative(vector<int> arr, int n, int k) {

// Better Approach, we will use previous result for fast computation
	vector<int> ans;
	int index=-1;  // index denotes previous window first negative

	for(int curr=0; curr < n-k+1; curr++){

		// index is also in curr window then it is also first negative of this current window
		if(index != -1 && curr <= index){
			ans.push_back(arr[index]);
			continue;
		}
		

		int j=curr;
		while(j < k+curr){
			if(arr[j] < 0){
				ans.push_back(arr[j]);
				index = curr;
				break;
			}
			j++;
		}

		if(j == k+curr){
			ans.push_back(0);
		}
	}

	return ans;
}
```

## Aproach 3 (Using Queue)

👉 Time -> O(n)

```cpp

```
