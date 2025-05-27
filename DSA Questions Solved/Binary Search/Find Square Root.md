# Find Square Root 

## Only Integer Part (i.e. 27 => 5.196 = 5)
```cpp
int integerSqrt(int n) {
    if (n == 0 || n == 1) return n;

    int start = 0, end = n, ans = -1;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        if (square == n) return mid;
        else if (square < n) {
            ans = mid;        // Possible answer
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}
```

## Float part

```cpp
double preciseSqrt(int n, int precision = 6) {
    double start = 0, end = n;
    double mid;

    double ans = 0;

    while ((end - start) > 1e-7) { // for 6 decimal precision
        mid = (start + end) / 2.0;

        if (mid * mid <= n) {
            ans = mid;
            start = mid;
        } else {
            end = mid;
        }
    }

    return ans;
}
```
