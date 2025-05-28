# Deque

👉 Insertion and deletion at both end i.e. from front as well as back side.

`We will study in depth after.`

## Functionalities

  1. push_back()
  2. push_front()
  3. pop_back()
  4. pop_front()
  5. at(index)
  6. empty()
  7. front()
  8. back()
  9. size()
  10. erase(start, end)  --> end is not included

```cpp
#include <iostream>
#include <deque>
using namespace std;



int main() 
{
  deque<int> d;
  
  d.push_back(1);
  d.push_front(2);
  
  for(int i: d){
    cout<<i<<" ";
  }
  
  cout<<endl;
  
  // d.pop_back();
  
  // d.pop_front();
  
  // cout<<"\nElement at index 1 : "<<d[1];
  cout<<"\nElement at index 1 : "<<d.at(1);
  
  cout<<"\nFront : "<<d.front();
  cout<<"\nBack : "<<d.back();
  
  cout<<"\nEmpty or not : "<<d.empty();
  
  cout<<"\nbefore erase : "<<d.size();
  
  d.erase(d.begin(), d.begin() + 1);
  
  cout<<"\nafter erase : "<<d.size();
  
  
  return 0;
}
```
## Output

```
2 1 

Element at index 1 : 1
Front : 2
Back : 1
Empty or not : 0
before erase : 2
after erase : 1
```
