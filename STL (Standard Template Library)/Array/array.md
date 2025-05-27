# Array

👉 Remember that no one use array using STL because normal array is better to use . It is not adding anything extra functionality to basic array.

```cpp
#include <iostream>
#include <array>
using namespace std;



int main() 
{
  int basiz[5] = {1,2,3,4,5};
  
  array<int, 5> a = {1,2,3,4,5};
  
  int size = a.size();
  
  for(int i=0; i<size; i++){
    cout<<a[i]<<" ";
  }
  
  cout<<"\nSize of array : "<<size;
  cout<<"\nElement at index 2 : "<<a.at(2);
  cout<<"\nEmpty or not : "<<a.empty();
  
  cout<<"\nFirst Element -> : "<<a.front();
  cout<<"\nLast Empty -> : "<<a.back();
  
  
  return 0;
}
```

Output

```
1 2 3 4 5 
Size of array : 5
Element at index 2 : 3
Empty or not : 0
First Element -> : 1
Last Empty -> : 5
```
