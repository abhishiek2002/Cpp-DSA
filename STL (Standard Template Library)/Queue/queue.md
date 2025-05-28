# Queue (FIFO)

## Functionality
  1. push()
  2. pop()
  3. front()
  4. size()
  5. empty()
  

```cpp
#include <iostream>
#include <queue>
using namespace std;



int main() 
{
  queue<string> q;
  
  q.push("I");
  q.push("am");
  q.push("Abhishek");
  

  // size
  cout<<"\nSize of queue : "<<q.size(); 
  
  cout<<"\nFront element : "<<q.front();
  
  q.pop();
  
  cout<<"\nFront element : "<<q.front();
  
  // size
  cout<<"\nSize of queue : "<<q.size();
  
  // Is empty
  cout<<"\nEmpty or not : "<<q.empty();
  
  return 0;
}
```

👉 Output

```
Size of queue : 3
Front element : I
Front element : am
Size of queue : 2
Empty or not : 0
```
