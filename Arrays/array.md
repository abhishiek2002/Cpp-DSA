# Arrays in C++

## What is an Array?

An **array** in C++ is a collection of elements of the **same data type** stored at **contiguous memory locations**. It is used to store multiple values in a single variable, instead of declaring separate variables for each value.

## Why Use Arrays?

* Efficient way to store multiple values of same type
* Easy to access and manipulate data using index
* Saves memory and improves performance

## Declaration of Arrays

```cpp
<data_type> <array_name>[size];
```

### Example:

```cpp
int numbers[5];
```

This creates an array `numbers` with 5 integers.

## Indexing in Arrays

Array indexing starts from `0`.

* `numbers[0]` refers to the first element
* `numbers[4]` refers to the last element (in an array of size 5)

## Accessing Elements

You can access and modify array elements using their index.

```cpp
numbers[0] = 10;      // Assigning value
cout << numbers[0];   // Accessing value
```

## Initialization of Arrays

### 1. At Declaration:

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### 2. Partial Initialization:

```cpp
int arr[5] = {1, 2};   // remaining elements are 0
```

### 3. Without Size:

```cpp
int arr[] = {10, 20, 30}; // size automatically is 3
```

## Implementation Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90, 85, 76, 80, 95};
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i+1 << ": " << marks[i] << endl;
    }
    return 0;
}
```

## Arrays with Functions

### Passing array to function:

```cpp
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {1, 2, 3, 4};
    printArray(data, 4);
    return 0;
}
```

## Types of Arrays

### 1. One-Dimensional Array

```cpp
int arr[10];
```

### 2. Two-Dimensional Array (Matrix)

```cpp
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
```

### 3. Multi-Dimensional Array

```cpp
int tensor[2][3][4];
```

## Finding Maximum and Minimum in Array

```cpp
int max = arr[0], min = arr[0];
for (int i = 1; i < size; i++) {
    if (arr[i] > max) max = arr[i];
    if (arr[i] < min) min = arr[i];
}
```

## Scope of Arrays

* Arrays declared **inside a function** are **local** to that function.
* Arrays declared **globally** are accessible throughout the program.

## Reversing an Array

```cpp
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
```

## Useful Operations / Functions on Arrays

* Traversing using loop
* Searching element (linear or binary search)
* Sorting (Bubble, Selection, Insertion sort)
* Copying elements
* Merging arrays

### Example: Sum of Elements

```cpp
int sum = 0;
for (int i = 0; i < size; i++) {
    sum += arr[i];
}
```

---

## Summary

| Concept        | Description                         |
| -------------- | ----------------------------------- |
| Declaration    | `int arr[5];`                       |
| Indexing       | Starts from 0                       |
| Access/Modify  | `arr[i] = 10;` or `cout << arr[i];` |
| Types          | 1D, 2D, Multi-Dimensional           |
| With functions | Passed as parameter with size       |
| Reverse        | Use loop and swap logic             |
| Max/Min        | Loop through elements and compare   |
| Scope          | Depends on where it is declared     |

Arrays are fundamental in C++ for storing collections of data and performing operations on them efficiently.
