# Painter's Partition Problem

👉 <a href="https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557">Coding Ninja Question Link</a>

```cpp
bool isPossible(const vector<int> &boards, int k, int mid){
    int unitsCount = 0;
    int paintersCount = 1;

    for(int units: boards){
        if(unitsCount + units <= mid){
            unitsCount += units;
        }
        else{
            paintersCount++;
            if(paintersCount > k) return false;
            unitsCount = units;
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int ans = -1;
    int totalUnits = 0;
    int maxUnit = 0;

    for(int units: boards){
        totalUnits += units;
        maxUnit = maxUnit < units ? units : maxUnit;
    }

    long long int s = maxUnit, e = totalUnits;
    

    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossible(boards, k, mid)){
            e = mid - 1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}
```
