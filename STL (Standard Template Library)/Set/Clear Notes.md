# Set in C++ STL

## 🔹 Introduction

A `set` in C++ Standard Template Library (STL) is a **container** that stores **unique elements** in a **sorted order** (by default, in ascending order).

## 🔹 Properties of Set

* All elements are **unique** — duplicates are not allowed.
* Elements are **automatically sorted**.
* Implemented using **Red-Black Tree** (self-balancing BST).
* Provides **logarithmic time** complexity for insertion, deletion, and search.

---

## 🔹 Header File

```cpp
#include <set>
```

---

## 🔹 Syntax

```cpp
std::set<datatype> setName;
```

Example:

```cpp
std::set<int> s;
```

---

## 🔹 Common Operations

| Operation               | Syntax             | Description                       |
| ----------------------- | ------------------ | --------------------------------- |
| Insert element          | `s.insert(value);` | Adds element if not present       |
| Delete element          | `s.erase(value);`  | Removes the element if it exists  |
| Check presence          | `s.count(value);`  | Returns 1 if present, else 0      |
| Find element (iterator) | `s.find(value);`   | Returns iterator to the value     |
| Size of set             | `s.size();`        | Number of elements in set         |
| Check if empty          | `s.empty();`       | Returns true if set is empty      |
| Clear set               | `s.clear();`       | Removes all elements from the set |

---

## 🔹 Example Code

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Insertion
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(5); // Duplicate, won't be added

    // Display elements
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Search
    if (s.count(2))
        cout << "2 is present" << endl;

    // Deletion
    s.erase(3);

    // After deletion
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
```

### Output:

```
2 3 5
2 is present
2 5
```

---

## 🔹 Important Notes

* Elements are sorted using `<` operator by default.
* To sort in **descending order**, use a custom comparator:

```cpp
set<int, greater<int>> s;
```

---

## 🔹 Iterators in Set

Set supports bidirectional iterators:

```cpp
auto it = s.begin();   // Points to first element
auto rit = s.rbegin(); // Points to last element (reverse begin)
```

---

## 🔹 Set vs Multiset

| Feature          | set               | multiset         |
| ---------------- | ----------------- | ---------------- |
| Duplicate values | Not allowed       | Allowed          |
| Header           | `<set>`           | `<set>`          |
| Use case         | Unique collection | Allow duplicates |

---

## 🔹 Time Complexity (Average Case)

| Operation | Time     |
| --------- | -------- |
| Insert    | O(log n) |
| Erase     | O(log n) |
| Search    | O(log n) |

---

## 🔹 Summary

* `set` is ideal when you want to **store unique elements** in **sorted order**.
* Offers efficient insertion, deletion, and lookup using a balanced tree.
* Part of `<set>` header file and used with iterators for traversal.

---

## 🔹 Practice Tip

Use `set` when:

* You need uniqueness.
* You want elements in order.
* You care about fast lookup times.
