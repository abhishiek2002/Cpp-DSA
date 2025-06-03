# Pointer Code

## Code 1

```cpp
int main() 
{
  int num=412;
  cout<<num<<endl;
  
  // address of operator - &
  
  cout<<"Address of num -> "<<&num<<endl;  // a hexadecimal value that is memory address
  
  // But what if we want to store the address type datatype
  // Here pointer will use that store the address
  
  int *ptr = &num;
  
  cout<<"Value is -> "<<*ptr<<endl;
  cout<<"Address is -> "<<ptr<<endl;
  
  
  double d = 4.2;
  double *p2 = &d;
  
  cout<<"Value is -> "<<*p2<<endl;
  cout<<"Address is -> "<<p2<<endl;
  
  cout<<"Size of integer is -> "<<sizeof(num)<<endl;
  cout<<"Size of pointer is -> "<<sizeof(ptr)<<endl;
  cout<<"Size of double pointer is -> "<<sizeof(p2)<<endl;
  
  
  return 0;
}
```
Output:

```
412
Address of num -> 0x7fff1e6b1a4c
Value is -> 412
Address is -> 0x7fff1e6b1a4c
Value is -> 4.2
Address is -> 0x7fff1e6b1a50
Size of integer is -> 4
Size of pointer is -> 8
Size of double pointer is -> 8
```

## Code 2

Suggest not to initialize wild pointer

```cpp
  // pointer to int is created, and pointing to random garbage address
  int *p;  // wild pointer
  
  cout<<*p<<endl;
  
  int *p = 0;
  
  cout<< *p << endl;  // Error
```

## Code 3

```cpp
  int i = 5;
  
  int *q = &i; 
  
  cout<<q<<endl;
  cout<<*q<<endl;
  
  int *p = 0;
  p = &i; // same to above
  
  cout<<p<<endl;
  cout<<*p<<endl;
```

Output:
```
0x7ffdb9219b44
5
0x7ffdb9219b44
5
```

## Code 4

```cpp
  int num = 5;
  int a = num;
  
  a++;
  
  cout<< num << endl; // 5
  cout<< a << endl;   // 6
```

Output:

```
5
6
```

## Code 5

```cpp
  int num = 5;
  
  int *p = &num;
  int b = *p;
  
  b++;
  
  cout<< num << endl;  // 5
  cout<< b << endl;   // 6
```
Output:

```
5
6
```

## Code 6

```cpp
  int num = 5;
  int *p = &num;
  
  (*p)++;
  
  cout<< num << endl; // 6
```

## Code 7
Copying a pointer
```cpp
  // copying a pointer
  
  int num = 5;
  
  int *p = &num;
  int *q = p;
  
  cout<< p <<" - "<< q <<endl;
  cout<< *p <<" - "<< *q <<endl;
```

Output:
```
0x7ffd7298c2c4 - 0x7ffd7298c2c4
5 - 5
```

## Code 8

```cpp
  int num = 5;
  
  int *t = &num;
  
  cout<<"Before " << t <<endl;
  
  t = t + 1; // add 4 because int have 4 byte size, if it is char then increment by 1
  // if double then increment by 8
  
  cout<<"After " << t <<endl;
```

Output:
```
Before 0x7ffc43b9db2c
After 0x7ffc43b9db30
```
