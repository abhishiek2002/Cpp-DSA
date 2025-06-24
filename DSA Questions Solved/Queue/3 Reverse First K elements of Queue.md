# Reverse First K elements of Queue

👉 Time -> O(n) & space -> O(k)

## Approach Using Stack

```cpp
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;

    // push k element in stack from queue
    int i=0;
    while(i<k){
        s.push(q.front());
        q.pop();
        i++;
    }

    // push stack element in queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    // now pop first n-k element and push them from back again in queue

    int n = q.size();

    i=0;
    while(i<n-k){
        int element = q.front();
        q.pop();
        q.push(element);
        i++;
    }

    return q;
}
```
