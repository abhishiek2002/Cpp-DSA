# List
👉 STL list is implement using double-linked list.
👉 There is direct access of element in this i.e. need to traverse till that element or index.

```cpp
#include <iostream>
#include <list>
using namespace std;



int main() 
{
  list<int> l;
  
  // copy list 
  // list<int> n(l);
  list<int> n = l;
  
  // initialize with specific value and size
  
  list<int> a(5, 100);
  
  for(int i: a){
    cout<<i<<" ";
  }
  cout<<endl;
  
  l.push_back(99);
  l.push_front(100);
  
  for(int i: l){
    cout<<i<<" ";
  }
  
  cout<<endl;
  
  cout<<"\nSize of list : "<<l.size();
  
  // l.pop_back();
  
  // l.pop_front();
  
  // cout<<"\nElement at index 1 : "<<d[1];
  // cout<<"\nElement at index 1 : "<<d.at(1);
  
  // cout<<"\nFront : "<<d.front();
  // cout<<"\nBack : "<<d.back();
  
  // cout<<"\nEmpty or not : "<<d.empty();
  
  l.erase(l.begin());
  
  cout<<"\nafter erase : "<<endl;
  
  for(int i: l){
    cout<<i<<" ";
  }
  
  
  return 0;
}
```

👉 Output
```
100 100 100 100 100 
100 99 

Size of list : 2
after erase : 
99
```
