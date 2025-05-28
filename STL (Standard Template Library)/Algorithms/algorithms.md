👉 Header File
```cpp
#include <algorithm>
```

## Common Algorithm we will Use
  1. Binary Search
  2. lower_bound
  3. upper_bound
  4. rotate
  5. reverse
  6. max
  7. min
  8. swap
  9. sort

🔹 Binary Search(begin, end, value):

```cpp
  cout<<"Applying binary search\n";
  
  cout<<"\nFinding 6 -> "<<binary_search(v.begin(), v.end(), 6);
```

🔹 lower_bound(begin, end, value):
Returns an iterator pointing to the **first element that is not less than (>=) the given value.

```cpp
    // lower_bound returns iterator to first element >= 3
    auto lb = lower_bound(v.begin(), v.end(), 3);  // Points to 3 (index 1)

    cout << "Lower bound of 3: " << (lb - v.begin()) << endl;

```

🔹 upper_bound(begin, end, value):
Returns an iterator pointing to the **first element that is greater than (>) the given value.

```cpp
    // upper_bound returns iterator to first element > 3
    auto ub = upper_bound(v.begin(), v.end(), 3);  // Points to 5 (index 3)
    cout << "Upper bound of 3: " << (ub - v.begin()) << endl;
```

🔹 sort()
👉 Used to sort a container in ascending (default) or custom order.
👉 sorting -> Based on intro sort that combine three algo quick, heap, insertion sort

```cpp
sort(v.begin(), v.end());
```

👉 For descending order

```cpp
sort(v.begin(), v.end(), greater<int>());
```

🔹 reverse()
Reverses the order of elements in a container.

```cpp
reverse(v.begin(), v.end());
```

🔹 rotate()
Reverses the order of elements in a container.

```cpp
  rotate(v.begin(), v.begin()+1, v.end());
  
  cout<<"\nAfter rotation"<<endl;
  
  for(int i: v){
    cout<<i<<" ";
  }
```

 🔹 max & min

 ```cpp
  cout<<endl;
  cout<<max(2,5)<<endl;
  cout<<min(2,5)<<endl;
``` 
  
  🔹 swap
  ```cpp
  int a  = 2, b= 5;
  
  swap(a,b);
  
  
  cout<<a<<" "<<b<<endl;
```

## Code

```cpp
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;



int main() 
{
  vector<int> v;
  
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  
  for(int i: v){
    cout<<i<<" ";
  }
  
  cout<<"\nApplying binary search\n";
  
  cout<<"\nFinding 6 -> "<<binary_search(v.begin(), v.end(), 6);
  
  cout<<"\nLower bound of 3 -> "<<lower_bound(v.begin(), v.end(), 3)-v.begin();
  cout<<"\nUpper bound of 3 -> "<<upper_bound(v.begin(), v.end(), 3)-v.begin();
  
  // max & min
  
  cout<<endl;
  cout<<max(2,5)<<endl;
  cout<<min(2,5)<<endl;  
  
  // swap
  
  int a  = 2, b= 5;
  
  swap(a,b);
  
  
  cout<<a<<" "<<b<<endl;
  
  // reverse string
  
  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());
  
  cout<<"string -> "<<abcd<<endl;
  
  // rotate array
  
  rotate(v.begin(), v.begin()+1, v.end());
  
  cout<<"\nAfter rotation"<<endl;
  
  for(int i: v){
    cout<<i<<" ";
  }
  
  // sorting -> Based on intro sort that combine three algo quick, heap, insertion sort
  
  sort(v.begin(), v.end());

  cout<<"\nAfter sorting"<<endl;
  
  for(int i: v){
    cout<<i<<" ";
  }
  
  
  return 0;
}
```

👉 Output

```
1 3 6 7 
Applying binary search

Finding 6 -> 1
Lower bound of 3 -> 1
Upper bound of 3 -> 2
5
2
5 2
string -> dcba

After rotation
3 6 7 1 
After sorting
1 3 6 7
```
