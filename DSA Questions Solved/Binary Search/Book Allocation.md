# Book Allocation

👉 <a href="https://www.naukri.com/code360/problems/allocate-books_1090540">Coding Ninja Question Link</a>
```cpp
bool isPossible(const vector<int>& arr, int n, int m, int mid){
    int studentsCount = 1;
    int allocatedPages = 0;

    for(int i=0; i<n; i++){
        if(allocatedPages + arr[i] <= mid){
            allocatedPages += arr[i];
        }
        else {
            studentsCount++;
            if(studentsCount > m) return false;
            if(arr[i] > mid) return false;
            allocatedPages = arr[i];
        }
    }
    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int ans = -1;
    if(m>n) return ans;
    int Allpages = 0;
    int maxPage = 0;

    for(int i: arr){
        Allpages += i;
        maxPage = max(maxPage, i);
    }

    int s = maxPage, e = Allpages;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            e = mid - 1;
            ans = mid;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
```

👉 <a href="https://www.naukri.com/code360/problems/ayush-gives-ninjatest_1097574">Coding Ninja Question Link</a>

```cpp
#include <bits/stdc++.h> 
bool isPossible(int n, int m, vector<int> time, long long int mid){
	int dayCount = 1;
	long long int dayTime = 0;
	for(int i=0; i<m; i++){
		if(dayTime + time[i] <= mid){
			dayTime += time[i];
		}
		else{
			dayCount++;
			if(dayCount > n) return false;
			if(time[i] > mid) return false;
			dayTime = time[i];
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	// size of time array is m and m is also no. of chapters
	// and n is no. of days

	long long int tt = 0; //total time initialization
	for(long long int t: time){
		tt += t;
	}

	long long int At = tt/n;  // average time = total time/no. of days

	// Because maximum time a day will always be 
	// maxTime >= At (average time)

	long long int maxTime = At; 

	long long int s = At, e = tt;  // s = start, e = end of binary search initially

	while(s<=e){
		long long int mid = s + (e-s)/2;
		if(isPossible(n, m, time, mid)) {
			e = mid - 1;
			maxTime = mid;
		}
		else{
			s = mid + 1;
		}
	}

	return maxTime;

}
```
