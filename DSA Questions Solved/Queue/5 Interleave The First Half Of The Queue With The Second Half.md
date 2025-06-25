# Interleave The First Half Of The Queue With The Second Half

👉 <a href="https://www.naukri.com/code360/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450">Coding Ninja Problem Link</a>

```cpp
#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    int size = q.size();
    queue<int> firstHalf;

    int i=0;
    while(i<size/2){
        firstHalf.push(q.front());
        q.pop();
        i++;
    }

    while(!firstHalf.empty()){
        q.push(firstHalf.front());
        firstHalf.pop();
        q.push(q.front());
        q.pop();
    }
}
```
