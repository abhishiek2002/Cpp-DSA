# Reverse a string

```cpp
#include <iostream>
#include<cstring>
using namespace std;



int main() 
{
  char a[20] = "Abhishek Kuntal";
  

  int length = strlen(a);  
  int s=0, e=length-1;
  
  while(s<e){
    swap(a[s], a[e]);
    s++;
    e--;
  }
  
  cout<<a;
  
  
  return 0;
}
```
