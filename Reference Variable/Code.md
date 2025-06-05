# Reference Variable

---
## How

```cpp
#include <iostream>
using namespace std;


int main() 
{
  int i = 5; 
  
  // reference variable means -> same memory but different name
  
  // create a reference variable
  int& j = i; // reference variable
  
  j++;
  
  cout<<"Value of i :-> "<< i << endl;
  cout<<"Value of j :-> "<< j << endl;
  
  
  
  return 0;
}
```

Output:
```
Value of i :-> 6
Value of j :-> 6
```
---
## Why

```cpp
#include <iostream>
using namespace std;

void update2(int& n){  // memory toh mili pdi hai, bas isko naam alag de deta hu (mtlb memory toh vhi hai bas naam alag de de)
  n++;
}

void update1(int n){  // nyi memory create kri hai mtlb copy (pass by value)
  n++;
}

int main() 
{
  /*
  int i = 5; 
  
  // reference variable means -> same memory but different name
  
  // create a reference variable
  int& j = i; // reference variable
  
  j++;
  
  cout<<"Value of i :-> "<< i << endl;
  cout<<"Value of j :-> "<< j << endl;
  */
  
  int n = 5;
  
  cout<<"Now updating using pass by value variable\n"<<endl;
  
  cout<<"Before "<<n<<endl;
  update1(n);
  cout<<"After "<<n<<endl;
  
  cout<<"\nNow updating using pass by reference variable\n"<<endl;
  
  cout<<"Before "<<n<<endl;
  update2(n);
  cout<<"After "<<n<<endl;
  
  
  return 0;
}
```

Output:
```
Now updating using pass by value variable

Before 5
After 5

Now updating using pass by reference variable

Before 5
After 6
```
---
