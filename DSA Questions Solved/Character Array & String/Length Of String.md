# Length Of String

```cpp
#include <iostream>
#include<cstring>
using namespace std;



int main() 
{
  char a[20] = "Abhishek Kuntal";
  
  
  
  cout<<"\nSize of string a -> "<<sizeof(a)/sizeof(a[0]);
  
  // int length = 0;
  // for(int ch: a){
  //   if(ch == '\0') break;
  //   length++;
  // }
  // cout<<"\nLength of string a -> "<<length;

  int i=0;
  while(a[i] != '\0'){
    i++;
  }
  cout<<"\nLength of string a -> "<<i;
  
  return 0;
}
```

👉 Output:
```
Size of string a -> 20
Length of string a -> 15
```
