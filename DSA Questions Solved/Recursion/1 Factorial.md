# Factorial (Using recursion)

```cpp
#include <iostream>
using namespace std;

long long int fact(int n){
  if(n==1 || n==0) return 1;
  
  else return n*fact(n-1);
}


int main() 
{
  int n;
  cin>>n;
  
  cout<<"Factorial of "<<n<<" is :-> "<<fact(n);
  return 0;
}
```
