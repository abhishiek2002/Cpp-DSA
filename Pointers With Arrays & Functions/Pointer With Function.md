# 📌 Pointers with Functions in C++

---

## ✅ Example 1: Passing Pointer to a Function

```cpp
#include <iostream>
using namespace std;

void print(int *p){
    cout << "Address -> " << p << endl;
    cout << "Value at -> " << *p << endl;
}

int main() {
    int value = 5;
    int *p = &value;

    // Passing pointer variable
    print(p);

    // Passing address directly
    print(&value);

    return 0;
}
```

### 🔍 Output:

```
Address -> 0x7fff4e2a062c
Value at -> 5
Address -> 0x7fff4e2a062c
Value at -> 5
```

### 🧐 Explanation:

* We passed the pointer `p` and the address of `value` directly.
* Both `p` and `&value` point to the same memory location, hence the same output.
* `*p` gives the value stored at that address.

### 🧠 Memory Layout (Visualized)

```
Memory Address     Variable     Value
0x7fff4e2a062c     value        5
                 ↗
               p (pointer to value)
```

---

## ✅ Example 2: Modifying Pointer vs Value at Pointer

```cpp
#include <iostream>
using namespace std;

void update(int *p){
    p = p + 1; // Incrementing pointer (not the value at address)
    cout << "Inside " << p << endl;
}

int main() {
    int value = 5;
    int *p = &value;

    cout << "Before " << p << endl;
    update(p);
    cout << "After " << p << endl;

    return 0;
}
```

### 🔍 Output:

```
Before 0x7fff945b2a8c
Inside 0x7fff945b2a90
After 0x7fff945b2a8c
```

### 🧐 Explanation:

* Pointer `p` is passed **by value**, i.e., a copy of pointer is passed.
* Inside `update()`, the local copy is modified, not the original.
* Hence, original pointer `p` in `main()` remains unchanged.
* You **cannot change the pointer itself**, but you **can change the value at that pointer** using `*p`.

### 🧠 Pointer Passing Diagram

```
main()                 update()
---------             ---------
   p ------------------> p (copy)
  |                      |
  |                      v
0x7fff...            0x7fff... + 1
```

* `p` in `main` remains pointing to original address.
* `p` in `update` is a separate copy, hence can be incremented safely without changing the original.

---

## ✅ Example 3: Pointers with Arrays in Functions

```cpp
#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    // so when you are passing array to the function then it is not array but it is pointer
    // cout<< "\nSize of arr inside the function :-> " << sizeof(arr) << endl; // 8

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Passing full array
    cout << "Sum is " << getSum(arr, 5) << endl;

    // Passing partial array starting from index 2
    cout << "Sum is " << getSum(arr + 2, 3) << endl;

    return 0;
}
```

### 🔍 Output:

```
Sum is 15
Sum is 12
```

### 🧐 Explanation:

* Arrays are passed as pointers in function.
* So `arr[]` is actually treated as `int* arr`.
* We can pass a **part of array** using pointer arithmetic (`arr + 2`). (So benefit of array pointer is that you can pass a portion of array to the function)
* It helps in flexible data handling in function calls.

### 🧠 Array Memory Layout:

```
Index      Address        Value
  0     0x7fff...100      1
  1     0x7fff...104      2
  2     0x7fff...108      3   <-- arr + 2
  3     0x7fff...10C      4
  4     0x7fff...110      5
```

* When passing `arr`, sum = 1+2+3+4+5 = 15
* When passing `arr+2`, sum = 3+4+5 = 12

---

## 📜 Summary

| Concept                         | Description                                               |
| ------------------------------- | --------------------------------------------------------- |
| `int*` in function parameter    | Accepts address of an integer                             |
| Array passed to function        | Treated as pointer                                        |
| Pointer passed to function      | Pass-by-value (copy of address is passed)                 |
| `*p`                            | Access or modify value at address                         |
| `p + 1`                         | Moves pointer to next memory block (depends on data type) |
| Can pointer be updated in func? | No, unless passed as `int**` (pointer to pointer)         |

---

