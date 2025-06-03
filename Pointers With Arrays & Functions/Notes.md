# Pointers with Arrays and Functions in C++

## 📘 Pointers and Arrays

### 🔗 Relationship between Pointers and Arrays

In C++, the name of an array acts as a pointer to its first element.

```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;  // same as int* ptr = &arr[0];
```

### 🧭 Accessing Array Elements with Pointers

```cpp
cout << *ptr;        // Outputs 10
cout << *(ptr + 1);  // Outputs 20
```

`arr[i]` is equivalent to `*(arr + i)`.

### 🛠 Modifying Array Elements with Pointers

```cpp
for (int i = 0; i < 3; i++) {
    *(ptr + i) = *(ptr + i) * 2;
}
```

### ➕ Pointer Arithmetic

You can perform arithmetic on pointers to traverse arrays.

```cpp
int arr[] = {1, 2, 3};
int* p = arr;
p++;  // points to arr[1]
```

### 📚 Array of Pointers

```cpp
int a = 5, b = 10, c = 15;
int* arr[3] = {&a, &b, &c};
cout << *arr[1]; // Outputs 10
```

### 📈 Dynamic Array with Pointers

```cpp
int* dynArr = new int[5];
for (int i = 0; i < 5; i++) {
    dynArr[i] = i * 10;
}

for (int i = 0; i < 5; i++) {
    cout << *(dynArr + i) << " ";
}
delete[] dynArr;
```

---

## 📗 Pointers and Functions

### 📦 Passing Pointers to Functions

Allows functions to directly modify the original variable (pass-by-reference).

```cpp
void increment(int* ptr) {
    (*ptr)++;
}

int x = 5;
increment(&x);
cout << x;  // Outputs 6
```

### 🔁 Using Pointers to Swap Values

```cpp
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int x = 10, y = 20;
swap(&x, &y);
```

### 🧾 Passing Arrays to Functions

Arrays are passed as pointers.

```cpp
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int nums[] = {1, 2, 3};
printArray(nums, 3);
```

### 🔄 Function Returning Pointer

```cpp
int* getMax(int* a, int* b) {
    return (*a > *b) ? a : b;
}

int x = 100, y = 200;
int* maxPtr = getMax(&x, &y);
cout << *maxPtr;  // Outputs 200
```

### ⚠️ Caution: Returning Local Variable Address

Do **not** return the address of a local variable from a function:

```cpp
int* wrongFunc() {
    int x = 10;
    return &x;  // x will be destroyed after function ends
}
```

---

## ✅ Summary

* Arrays and pointers are deeply connected in C++.
* Pointers allow direct access and manipulation of array elements.
* Functions can receive pointers to modify caller variables or arrays.
* Dynamic memory and pointer-based function returns need careful handling.

---

Happy Learning! 🚀
