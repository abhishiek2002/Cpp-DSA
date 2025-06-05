# 🌟 Dynamic Memory Allocation for 2D Arrays in C++

In C++, when the size of the 2D array is not known at compile time, we use **dynamic memory allocation**. This allows us to allocate memory during runtime.

---

## ✅ Why Dynamic Allocation?

🔹 **Flexibility**: Allocate memory as per user input.  
🔹 **Efficient use of memory**: Only the required amount of memory is allocated.  
🔹 **Avoids stack overflow**: Large arrays should be allocated in heap memory.

---

## 🧠 Memory Layout of 2D Array

A 2D array is conceptually a table of rows and columns, but in memory, it's stored as an **array of pointers**, where each pointer points to a 1D array (row).

```text
int** arr;
        |
        v
  +-----+     +----+----+----+----+
  |arr  | --> | *  | *  | *  | *  |  ---> rows
  +-----+     +----+----+----+----+
                |    |    |    |
                v    v    v    v
              cols cols cols cols
```

---

## 🛠️ Syntax to Create Dynamic 2D Array

### 🪜 Step-by-Step:
```cpp
int rows, cols;
cin >> rows >> cols;

// Step 1: Create a pointer to a pointer (for rows)
int** arr = new int*[rows];

// Step 2: Allocate memory for each row
for(int i = 0; i < rows; ++i) {
    arr[i] = new int[cols];
}
```

---

## 🔡 Taking Input and Output

### 📥 Input
```cpp
for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
        cin >> arr[i][j];
    }
}
```

### 📤 Output
```cpp
for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

---

## 🧹 Deallocating Memory

It's important to **free the memory** to avoid memory leaks:

```cpp
for(int i = 0; i < rows; ++i) {
    delete[] arr[i];  // delete each row
}
delete[] arr;          // delete row pointer array
```

---

## 💡 Full Example Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int** arr = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    cout << "Enter elements:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    cout << "2D Array:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
```

---

## 📝 Summary

🔸 Use `new` to dynamically allocate 2D arrays.  
🔸 Always deallocate with `delete[]` to avoid memory leaks.  
🔸 Memory layout is an array of pointers to arrays.

---

## 💡 Pro Tip

If you're using C++ STL, prefer using **vectors** for dynamic 2D arrays. It is easier and safer:

```cpp
#include <vector>
using namespace std;

vector<vector<int>> arr(rows, vector<int>(cols));
```

---
