# Stack (LIFO)

## Operations
  1. push()
  2. pop()
  3. top()
  4. size()
  5. empty()

```cpp
#include <iostream>
#include <stack>
using namespace std;



int main() 
{
  stack<string> s;
  
  s.push("I");
  s.push("am");
  s.push("Abhishek");
  
  cout<<"\nTop element : "<<s.top();
  
  s.pop();
  
  cout<<"\nTop element : "<<s.top();
  
  // size
  cout<<"\nSize of stack : "<<s.size();
  
  // Is empty
  cout<<"\nEmpty or not : "<<s.empty();
  
  return 0;
}
```

👉 Output

```
Top element : Abhishek
Top element : am
Size of stack : 2
Empty or not : 0
```
  
  
