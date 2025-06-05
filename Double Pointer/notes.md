# 📌 Double Pointer in C++

## 🧠 What is a Double Pointer?
A **double pointer** in C++ is a pointer to another pointer. In simple terms, it stores the address of another pointer variable.

```cpp
int a = 10;
int* ptr = &a;       // ptr stores address of a
int** dptr = &ptr;    // dptr stores address of ptr
```

---

## 🧩 Why Do We Use Double Pointers?

1. **Dynamic memory allocation in 2D arrays**
2. **To modify the actual pointer value inside a function**
3. **Pointer to pointer structures in data structures (like linked lists)**

---

## 🧪 Memory Diagram

Assume:
```cpp
int a = 10;
int* ptr = &a;
int** dptr = &ptr;
```

```
┌────────┐       ┌────────┐       ┌────────┐
│   a    │<──────│  ptr   │<──────│ dptr   │
│  10    │       │  &a    │       │  &ptr  │
└────────┘       └────────┘       └────────┘
     ^               ^
     |               |
   &a            &ptr (stored in dptr)
```

---

## 🧾 Accessing Values

```cpp
cout << a;      // prints 10
cout << *ptr;   // prints 10 (value at address stored in ptr)
cout << **dptr; // prints 10 (value at address stored in *dptr)
```

---

## 📦 Example Code

### Example 1: Basic Usage
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;
    int** dptr = &ptr;

    cout << "Value of a: " << a << endl;
    cout << "Value using *ptr: " << *ptr << endl;
    cout << "Value using **dptr: " << **dptr << endl;

    return 0;
}
```

### Output:
```
Value of a: 5
Value using *ptr: 5
Value using **dptr: 5
```

---

### Example 2: Modifying Pointer Inside Function
```cpp
#include <iostream>
using namespace std;

void updatePointer(int** dp) {
    static int b = 20;
    *dp = &b;
}

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Before: " << *ptr << endl;
    updatePointer(&ptr);
    cout << "After: " << *ptr << endl;

    return 0;
}
```

### Output:
```
Before: 10
After: 20
```

---

## 🧵 Summary Table

| Term       | Meaning                          |
|------------|----------------------------------|
| `*ptr`     | Pointer to an integer            |
| `**dptr`   | Pointer to a pointer to integer  |
| `&ptr`     | Address of pointer `ptr`         |
| `*dptr`    | Gives pointer `ptr`              |
| `**dptr`   | Gives value pointed by `ptr`     |

---

## ✅ Tips
- You need to use double pointers when you want to modify a pointer in a function.
- Always initialize pointers to avoid undefined behavior.
- Double pointers are essential for dynamic memory allocation of 2D arrays.

---

## 🧠 Real Life Analogy
Think of `int a` as a book.
- `ptr` is like a finger pointing to the book.
- `dptr` is like a friend telling you where your finger is pointing.

So `**dptr` is reaching the book through the friend's help.

---

## 🚀 That's all about Double Pointers in C++!
