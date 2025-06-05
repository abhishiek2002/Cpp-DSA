# Static vs Dynamic Memory

## Array Bad Practice

```cpp
int n;
cin>>n;

int arr[n];  // bad practice
```

Why ?

Because here memory allocations is not known at time of compile and that is very bad.

A program start with two type of memory 
  1. Stack (small memory)
  2. Heap (large memory)

So when memory allocation is known at time of compile then program is know how much stack memory it will require to complete the process.
If memory is not known and at running time if 'n' is large and stack does not have that much memory then program will crash.

## Then How To Make Variable (Dynamic) size array

Here we will use heap memory for dynamic size array because heap memory has large size.

### How ?

👉 'new' kwyword is used to create heap memory

Note :-  So when we use stack memory then it is called -> Static Allocation
        When we use heap memory then it is called -> Dynamic Memory Allocation

```cpp
new char;  // it will create a memory in heap for a character and return address of that memory 
```

So if it is return an address then what will we use? - Yes, you heard right. We will use pointer here.

```cpp
char *ch = new char;
```

BTS :-> a character space will created in heap memory and it's address will store to pointer 'ch' and pointers are created in stack memory.

So a character space (1 byte) is allocated in heap memory and a pointer is created (8 byte) in stack memory to store address of heap memory.

### Creating Dynamic array

```cpp
  // creating array in heap
  // new int; // allocate heap memory for one int
  
  // let's consider you want an int array of size 5 then you need to allocate heap memory for 5 int
  // then
  // new int[5]; // it will be used
  
  int *arr = new int[5];
```
BTS :-> 5 int space will created in heap memory and it's address will store to pointer 'arr' and pointers are created in stack memory.

So 5 int space (20 byte) is allocated in heap memory and a pointer is created (8 byte) in stack memory to store address of heap memory.

### Example Code 1

```cpp
#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n){
  int sum =0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  return sum;
}

int main() {
      int n ;
  cin >> n;
  
  // variable size array
  int *arr = new int[n];
  
  // taking input in array
  for(int i=0; i<n; i++){
    cin>>arr[i];  // *(arr + i) = arr[i]
  }
  
  int ans = getSum(arr, n);
  
  cout<<"Sum of array is :-> "<<ans<<endl;
  
  
  return 0;
}
```
Sample Input
```mathematica
5 1 2 3 4 5
```
Your Output
```mathematica
Sum of array is :-> 15
```

## Considering two cases

### Case 1

```cpp
while(true){
int a = 5;
}
```

👉 In case 1, this while loop will allocate an int memory space in stack memory at every loop and then stack memory will automatically release this memory space after every

loop again & again.

This will create no problem to memory space because stack memory automatically deallocate itself after out of scope.

### Case 2

```cpp
while(true){
int *a = new int;
}
```

👉 In case 2, at each loop an int space is allocated in heap memory.
👉 and because in heap memory allocation , space is not automatically deallocate after out of scope then it will fill all the heap memory and eventually program will crash

## Deallocating Dynamic Memory (Manually freeing memory)
👉 Using 'delete' keyword

```cpp
// single integer deletion
int *i = new int;
delete i;

// array deletion
int *arr = new int[50];
delete []arr;
```


