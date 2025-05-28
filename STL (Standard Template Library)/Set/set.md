# Set

👉 It implement using BST (Binary search tree)
👉 Set have only unique element.
👉 Elements can't modified , all you can do is insertion, deletion.
👉 Elements return in sorted order.

## Funtionality
  1. insert()
  2. count()  -> Element exists or not
  3. find()  -> Return the iterator (Iterator can't be print, it point toward the memory location)
  4. begin()  -> First element iterator
  5. empty()  -> True / False
  6. size()  

     
```cpp
#include <iostream>
#include <set>
using namespace std;



int main() 
{
  set<int> s;
  
  s.insert(5); // insertion complexity is O(log(n)) because of binary search tree
  s.insert(5);
  s.insert(5); 
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  
  for(int i: s){
    cout<<i<<" ";
  }
  cout<<endl;
  
  
  set<int>::iterator it = s.begin();  // taking iterator outside
  it++;
  
  s.erase(it);
  // s.erase(s.begin()++);
  
  // s.erase(s.begin() + 2);  // 👉 Not allowed

  for(int i: s){
    cout<<i<<" ";
  }
  cout<<endl;
  
  // Checking element exists or not
  
  cout<<"\n5 is present or not -> "<<s.count(5);
  
  // Find operation return iterator of that element
  
  set<int>::iterator itr = s.find(5);
  
  // cout<<s.find(5);  // 👉 Not allowed
  
  cout<<"\nValue at itr -> "<<*itr<<endl;
  
  for(auto it=itr; it != s.end(); it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  
  
  // Is empty
  cout<<"\nEmpty or not : "<<s.empty();
  
  return 0;
}
```

Output

```
0 1 5 6 
0 5 6 

5 is present or not -> 1
Value at itr -> 5
5 6 

Empty or not : 0
```
