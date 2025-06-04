# Pointer With Char Array

## `Cout` implementation to int array & char array
```cpp
  int arr[5] = {1,2,3,4,5};
  
  // char ch[5] = "abcde"; // error because it's length is 6 due to null character
  
  char ch[6] = "abcde"; // it is good
  
  cout<< arr << endl; // print address of initial block '&arr[0]'
  cout<< ch << endl;  // but here it print char array content
  
  // That means 'cout' implementation is different for char array & int array
```
Output:

```
0x7ffee4037f40
abcde
```

## Pointer with character array

```cpp
  int arr[5] = {1,2,3,4,5};
  
  char ch[6] = "abcde"; 
  
  char *c = &ch[0];
  
  cout<< c << endl; // because 'cout' implementation is different so here 'cout' for 'c' will print entire string content as same as for 'ch' case
  // because 'c' & 'ch' both are denoting same thing
  
  cout<< *c << endl; // but as 'c' is pointer to '&ch[0]' so '*c' is value at '&ch[0]' which is 'a' here
```
Output:
```
abcde
a
```

## What if character pointer does not counter with null character

```cpp
  // What if pointer does not counter with null character then
  char temp = 'z';
  
  char *t = &temp;
  
  cout<< t <<endl; // it will print random garbage until null character appears
```
Output:
```
z�3�n�
```

## Behind The Scene

```cpp
  char ch[6] = "abcde"; 
  // BTS :-> first create a temp memory that has initialized values "abcde"
  // then that temp memory content will copy to the memory assigned to char array 'ch'
  
  char *c = "abcde";
  // BTS :-> First create a temp memory that has initialized values "abcde"
  // then memory address of temp is assigned to pointer 'c' 
  // but it is risky so don't do it ever
```

