# Map (Sorted Map)

👉 This map (ordered) is implemented by `Random black tree` or through `Balance tree` having complexity of log(n) for search.
👉 Unordered map is implemented by hash table, there the complexity of search is O(1);
👉 Data stored in form of key-value pair
👉 All keys are unique and point to single value
👉 Two keys can have same value but same key can not point two values

## Functionality
  1. insert()
  2. count()  -> Element exists or not
  3. find()  -> Return iterator
  4. first()  -> Return iterator key
  5. second()  -> Return value
  6. empty()
  7. erase()  -> Erase using key

```cpp
#include <iostream>
#include <map>
using namespace std;



int main() 
{
  map<int, string> m;
  
  m[1] = "Abhishek";
  m[23] = "Software Engineer";
  m[2] = "Kuntal";
  
  // for(auto i: m){
  //   cout<<i.first<<endl;
  // }
  
  m.insert({5, "krishna"});
  
  cout<<"\nBefore Erase \n";
  for(auto i: m){
    cout<<i.first<<" "<<i.second<<endl;
  }
  
  //Exists or not
  cout<<"\nFinding 23 -> "<<m.count(23)<<endl;
  
  m.erase(5);

  cout<<"\nAfter Erase \n";
  for(auto i: m){
    cout<<i.first<<" "<<i.second<<endl;
  }  
  
  auto it = m.find(1);
  
  cout<<endl;
  for(auto i=it; i != m.end(); i++){
    cout<<(*i).first<<" ";
    cout<<(*i).second<<" ";
  }
  
  
  
  
  // Is empty
  cout<<"\nEmpty or not : "<<m.empty();
  
  return 0;
}
```
