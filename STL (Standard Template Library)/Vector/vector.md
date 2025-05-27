# Vector

👉 In depth we will study later on

```cpp
#include <iostream>
#include <vector>
using namespace std;



int main() 
{
  vector<int> a(5,1);  // 5 refers to size and initialize all element with 1
  
  for(int i: a){
    cout<<i<<" ";
  }
  cout<<endl;
  
  // vector<int> last(a);
  vector<int> last = a;  //same as above
  
  for(int i: last){
    cout<<i<<" ";
  }
  cout<<endl;
  
  vector<int> v;
  
  // size and capacity are two different things here size denotes the number of entries in the vector and capacity refers to the number of element it can store before getting it`s size double.
  
  cout<<"\nCapacity -> "<<v.capacity();
  cout<<"\nSize -> "<<v.size();
  
  v.push_back(1);
  
  cout<<"\nCapacity -> "<<v.capacity();
  cout<<"\nSize -> "<<v.size();

  v.push_back(2);
  
  cout<<"\nCapacity -> "<<v.capacity();
  cout<<"\nSize -> "<<v.size();

  v.push_back(3);
  
  cout<<"\nCapacity -> "<<v.capacity(); 
  cout<<"\nSize -> "<<v.size();

  cout<<"\nElement at index 2 : "<<v.at(2);
  cout<<"\nElement at index 2 : "<<v[2];
  
  cout<<"\nElement at front : "<<v.front();
  cout<<"\nElement at last : "<<v.back()<<endl;
  
  for(int i: v){
    cout<<i<<" ";
  }
  
  v.pop_back();
  
  cout<<endl;
  
  for(int i: v){
    cout<<i<<" ";
  }
  
  // Remember after clearing the vector. It's size becomes 0 but it's capacity remain same.
  
  cout<<"\nBefore Clear Size -> "<<v.size();
  v.clear();
  cout<<"\nAfter Clear Size -> "<<v.size(); 
  return 0;
}
```

Output

```
1 1 1 1 1 
1 1 1 1 1 

Capacity -> 0
Size -> 0
Capacity -> 1
Size -> 1
Capacity -> 2
Size -> 2
Capacity -> 4
Size -> 3
Element at index 2 : 3
Element at index 2 : 3
Element at front : 1
Element at last : 3
1 2 3 
1 2 
Before Clear Size -> 2
After Clear Size -> 0
```
