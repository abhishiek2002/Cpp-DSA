# Pointer with Integer array
---
## Playing with pointer
```cpp
  int arr[4] = {23,122,41,67};
  
  cout<<"address of first memory block is -> "<< arr <<endl;
  cout<<"address of first memory block is -> "<< &arr[0] <<endl; // both are same and are address of first memory block of array i.e. arr[0]
  
  // because p and arr both pointing toward first block address 
  // and *p & arr[0] both are value at index 0
  // no need to use int *p = arr; because arr itself work as a address(pointer)
  // so in function or anywhere else when you need to give address just write arr instead of pointer
  

  int *p = arr;
  // int *p = &arr[0]; // both are same
  
  cout<<*p<<endl; // 23
  cout<<*(p+1)<<endl; // 122
  
  cout<< *arr <<endl; // 23
  cout<< *(arr + 1) <<endl; // 122
  
  // arr[i]  = *(arr + i)
  // i[arr] = *(i + arr)
  
  cout<< arr[1] << endl;
  cout<< 1[arr] << endl;
  
  cout<<sizeof(p)<<endl;  // 8 byte
  cout<<sizeof(arr)<<endl;  // 4*length byte
  
  cout<< sizeof(&arr) << endl;  // 8 byte
```

Output:
```
address of first memory block is -> 0x7ffdfa80f3c0
address of first memory block is -> 0x7ffdfa80f3c0
23
122
23
122
122
122
8
16
8
```
---
## Symbol Table Cna't be modified


`🔍 Why arr = arr + 1; is an error`

`🔒 arr is not a variable — it is a constant pointer`

In C++, when you declare int arr[10];, the name arr decays to a pointer to the first element (&arr[0]) when used in expressions, but it's not a modifiable lvalue.

Think of arr as a constant pointer: `int* const arr = &arr[0];`

You cannot assign a new value to a constant pointer. That's why this line fails:


```cpp
arr = arr + 1;  // ❌ Illegal! You can't modify where the array starts
```


✅ Why `ptr = ptr + 1;` works

🔁 ptr is a regular pointer (i.e., modifiable)

Here, ptr is declared as:

```cpp
int* ptr = arr;
```

ptr is a separate pointer variable that can point anywhere. It’s not const.

So moving it forward (ptr + 1) is valid:

```cpp
ptr = ptr + 1;  // ✅ Legal. Now points to arr[1]
```
### code
```cpp
// Content of symbol table can not be changed
  
  int arr[10] = {1,2,3,4};
  
  // arr = arr + 1;  // Error , here we can't change symbol table Content , here `arr` is representing address of initial block in symbol table and we can't change the address of 'arr'
  
  int *ptr = arr;
  cout<< ptr << endl;
  ptr = ptr + 1;  // No error, because it does not change the current address of ptr but it increment the address by 4 if it is for int
  cout<< ptr << endl;
```
Output:
```
0x7fff16aefc00
0x7fff16aefc04
```
