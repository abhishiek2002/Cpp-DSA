# Static vs Dynamic Memory Allocation in C++

## 🚫 Problem: Bad Practice with Arrays

```cpp
int n;
cin >> n;

int arr[n];  // ❌ Bad practice
```

### ❓ Why is this bad?

* Memory allocation is **not known at compile time**.
* C++ doesn't guarantee support for variable-length arrays (VLAs).
* May lead to **stack overflow** if `n` is too large.

### 📦 Program Memory Types

1. **Stack Memory** – Small in size, fast, used for static memory allocation.
2. **Heap Memory** – Large in size, used for dynamic memory allocation.

When array size is known at compile time → Stack is used → ✅ Efficient
When size is not known → Need heap → ✅ Safe for large inputs

---

## ✅ Solution: Create Dynamic Arrays

Use **heap memory** for dynamic-sized arrays.

### 💡 How?

Use the `new` keyword:

```cpp
new char;  // Allocates 1 byte in heap for a character
```

### 📌 Pointer Usage

Since `new` returns an address, we use pointers to store that address:

```cpp
char *ch = new char;
```

* 1 byte is allocated in **heap** for `char`
* 8 bytes are used in **stack** for pointer `ch`

---

## 🧩 Creating a Dynamic Array

```cpp
int *arr = new int[5];
```

* 20 bytes (5×4) allocated in **heap**
* Pointer `arr` (8 bytes) is in **stack**

---

## 🧪 Example Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = getSum(arr, n);
  cout << "Sum of array is :-> " << ans << endl;

  return 0;
}
```

**Sample Input:**

```text
5
1 2 3 4 5
```

**Output:**

```text
Sum of array is :-> 15
```

---

## 📚 Understanding Memory Behavior

### 🔁 Case 1: Stack Allocation

```cpp
while(true) {
  int a = 5;
}
```

* Each loop creates a variable `a` in **stack**.
* Memory is **automatically deallocated** after each iteration.
* ✅ No memory leak.

### 🔁 Case 2: Heap Allocation Without Deallocation

```cpp
while(true) {
  int *a = new int;
}
```

* Each loop allocates 4 bytes in **heap** and 8 bytes (pointer) in **stack**
* Stack memory (pointer) will **automatically deallocated** after each iteration.
* But Heap Memory is **not deallocated**, leads to **heap memory leak**.
* ❌ Program will eventually **crash** due to memory exhaustion.

---

## 🧹 Freeing Heap Memory Manually

Use the `delete` keyword to prevent memory leaks:

### ✅ Deleting Single Element

```cpp
int *i = new int;
delete i;
```

### ✅ Deleting Dynamic Array

```cpp
int *arr = new int[50];
delete [] arr;
```

> Always use `delete` for every `new` to avoid memory leaks in C++.

---

✅ **Summary**:

* Use `new` for dynamic allocation → `heap` memory
* Stack memory is limited and should be used only when size is known
* Always deallocate memory with `delete` or `delete[]`
* Heap does **not** automatically deallocate memory → manually manage it
