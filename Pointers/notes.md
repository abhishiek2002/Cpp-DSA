# Pointers in C++

## 📌 Introduction

Pointers are a fundamental feature in C++ that allow variables to store the **memory address** of another variable. Understanding pointers is crucial for dynamic memory allocation, arrays, and efficient function parameter passing.

---

## 🔢 Basic Concepts

### What is a Pointer?

A pointer is a variable that **stores the address of another variable**.

```cpp
int x = 10;
int* ptr = &x; // ptr stores the address of x
```

* `int* ptr` declares a pointer to an integer.
* `&x` gives the address of variable `x`.

### Pointer Declaration

```cpp
type* pointerName;
```

Example:

```cpp
float* ptr;
char* cptr;
```

### Dereferencing a Pointer

To access the value at the address a pointer holds, use the `*` operator.

```cpp
int x = 5;
int* ptr = &x;
cout << *ptr; // Outputs 5
```

---

## 📌 Pointer Operations

### 1. Address-of Operator `&`

Returns the memory address of a variable.

```cpp
int a = 7;
cout << &a; // prints address of a
```

### 2. Dereference Operator `*`

Accesses the value at the address stored by the pointer.

```cpp
int* p = &a;
cout << *p; // prints 7
```

---

## 🧠 Why Use Pointers?

* **Dynamic memory allocation**
* **Efficient array and structure handling**
* **Function arguments passed by reference**
* **Building complex data structures (Linked Lists, Trees, etc.)**

---

## 🧪 Examples

### Example 1: Swapping Values using Pointers

```cpp
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int x = 5, y = 10;
swap(&x, &y);
```

### Example 2: Pointer to Pointer

```cpp
int x = 42;
int* ptr = &x;
int** pptr = &ptr;

cout << **pptr; // Outputs 42
```

---

## 🗂️ Pointers and Arrays

Arrays and pointers are closely related:

```cpp
int arr[3] = {1, 2, 3};
int* ptr = arr;
cout << *(ptr + 1); // Outputs 2
```

---

## 📦 Dynamic Memory Allocation

Using `new` and `delete`:

```cpp
int* ptr = new int;  // dynamically allocates memory
*ptr = 20;
delete ptr;          // deallocates memory
```

---

## 🚨 Common Mistakes

* Dereferencing NULL or uninitialized pointers.
* Memory leaks (forgetting `delete` after `new`).
* Dangling pointers (using a pointer after memory is deallocated).

---

## ✅ Summary

* Pointers store addresses.
* Use `*` to dereference and `&` to get addresses.
* Enable efficient memory and data structure manipulation.
* Essential for dynamic memory and pass-by-reference behavior.

---

## 📚 Further Reading

* C++ Reference: [cppreference.com](https://en.cppreference.com/w/cpp/language/pointer)
* "Effective C++" by Scott Meyers

---
