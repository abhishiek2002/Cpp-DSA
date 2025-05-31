# Mastering 2D Arrays in C++ - The Essential 20%

> This note covers the most important 20% of 2D arrays in C++ that will help you understand and master 80% of the problems involving them.

---

## Why We Need 2D Arrays?

* When we need to store data in **table format** (like a matrix) with rows and columns.
* Examples: storing a chess board, matrix operations, game boards, grid-based problems, etc.

---

## How 2D Arrays are Stored in Memory

* C++ stores 2D arrays in **row-major order**.
* This means all elements of the first row are stored in memory first, then second row, and so on.

Example:

```cpp
int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

In memory:

```
[1] [2] [3] [4] [5] [6]
```

Formula:

```
c*i + j
```

---

## Creating a 2D Array

Syntax:

```cpp
int arr[rows][cols];
```

Example:

```cpp
int arr[3][4]; // 3 rows, 4 columns
```

---

## Taking Input in 2D Array (Row-wise)

```cpp
int arr[3][4];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        cin >> arr[i][j];
    }
}
```

## Printing 2D Array (Row-wise)

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

---

## Column-wise Input in 2D Array

```cpp
int arr[3][4];
for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 3; i++) {
        cin >> arr[i][j];
    }
}
```

---

## Initialising a 2D Array

### Method 1: At declaration

```cpp
int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

### Method 2: Default zero initialization

```cpp
int arr[2][3] = {0}; // All elements become 0
```

---

## Linear Search in 2D Array

Search each element one by one:

```cpp
int target = 5;
bool found = false;
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        if (arr[i][j] == target) {
            found = true;
            cout << "Found at index (" << i << ", " << j << ")\n";
            break;
        }
    }
}
if (!found) cout << "Not found";
```
---
## Functions with 2D Arrays

Pass a 2D array to a function:
```
void printArray(int arr[][3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```
Note: Column size must be fixed when passing to a function.

---

## Binary Search in 2D Array

Only works if:

1. Each row is sorted.
2. First element of each row > last element of previous row.

Treat it as a 1D array:

```cpp
bool binarySearch2D(int arr[][4], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int r = mid / cols;
        int c = mid % cols;

        if (arr[r][c] == target)
            return true;
        else if (arr[r][c] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
```

---

## Summary

| Topic             | Key Insight                          |
| ----------------- | ------------------------------------ |
| Storage           | Row-major order                      |
| Creation          | `int arr[rows][cols];`               |
| Input             | Nested loops                         |
| Output            | Nested loops                         |
| Column-wise input | Outer loop on column                 |
| Init              | Use `{}` at declaration              |
| Linear Search     | O(n\*m)                              |
| Binary Search     | Use only on special sorted 2D arrays |

---

This much is enough to solve most 2D array problems in competitive programming or college-level DSA.
