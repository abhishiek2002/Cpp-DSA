#  Aggressive Cows

<a href="https://www.naukri.com/code360/problems/aggressive-cows_1082559">Coding Ninja Question Link</a>

```cpp
bool isPossible(const vector<int> &stalls, int k, int minimumDistance){
    int cowsCount = 1;
    int lastPos = stalls[0];


    for(int i=0; i < stalls.size(); i++){
        if(stalls[i] - lastPos >= minimumDistance){
            cowsCount++;
            if(cowsCount == k) return true;
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end()); // sorting stalls array

    int ans = -1;
    int min = stalls[0], max = stalls[0];

    for(int n: stalls){
        min = min > n ? n : min;
        max = max < n ? n : max;
    }

    int s = 0, e = max - min;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(isPossible(stalls, k, mid)){
            s = mid + 1;
            ans = mid;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
```
