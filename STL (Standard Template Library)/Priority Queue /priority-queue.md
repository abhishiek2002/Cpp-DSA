# Priority Queue


👉 Implement using max heap by default
👉 You can change it into min heap

`Remember we will study in depth after a while`

## Functionality
  1. push()
  2. pop()
  3. size()
  4. top()

```cpp
#include <iostream>
#include <queue>
using namespace std;



int main() 
{
  // max heap
  priority_queue<int> maxi;
  
  // min heap
  priority_queue< int,vector<int>, greater<int> > mini;
  
  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  
  int n = maxi.size();
  
  for(int i=0; i<n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }
  cout<<endl;
  
  mini.push(1);
  mini.push(3);
  mini.push(2);
  mini.push(0);
  
  n = mini.size();
  
  for(int i=0; i<n; i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }
  
  
  // Is empty
  cout<<"\nEmpty or not : "<<mini.empty();
  
  return 0;
}
```

Output

```
Output:

3 2 1 0 
0 1 2 3 
Empty or not : 1
```
