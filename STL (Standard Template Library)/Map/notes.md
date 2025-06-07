# Map in C++ STL (Standard Template Library)

## 🔹 What is a Map?

A **map** in C++ STL is an associative container that stores elements in a key-value pair (i.e., each element has a unique key and a corresponding value).

* It is **ordered by default** (based on the key).
* Implemented as a **self-balancing Binary Search Tree (BST)** (usually Red-Black Tree).
* **Keys are unique** — no duplicates allowed.

Syntax:

```cpp
#include <map>
std::map<key_type, value_type> map_name;
```

## 🔹 Basic Operations

### ✅ Insertion

```cpp
std::map<int, std::string> m;
m[1] = "One";
m[2] = "Two";
m.insert({3, "Three"});
```

### ✅ Inserting Multiple Key-Value Pairs at Once

You can insert multiple key-value pairs using an initializer list or a loop:

```cpp
// Using initializer list
m.insert({
    {4, "Four"},
    {5, "Five"},
    {6, "Six"}
});

// Using vector of pairs
std::vector<std::pair<int, std::string>> vec = {
    {7, "Seven"},
    {8, "Eight"},
    {9, "Nine"}
};

for (auto& p : vec) {
    m.insert(p);
}
```

### ✅ Accessing Elements

```cpp
std::cout << m[2];  // Output: Two
```

### ✅ Iterating Over Map

```cpp
for (auto it : m) {
    std::cout << it.first << " => " << it.second << std::endl;
}
```

### ✅ Find an Element

```cpp
if (m.find(2) != m.end()) {
    std::cout << "Found";
}
```

### ✅ Erase Element

```cpp
m.erase(2);  // Erases key 2 and its value
```

### ✅ Size, Empty, Clear

```cpp
m.size();     // Number of elements
m.empty();    // Check if map is empty
m.clear();    // Remove all elements
```

## 🔹 Key Characteristics

* **Sorted order** by key (ascending).
* **O(log n)** complexity for insertion, deletion, and search.
* Keys are **immutable** once inserted.

## 🔹 Example Program

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;

    age["Alice"] = 25;
    age["Bob"] = 30;
    age["Charlie"] = 28;

    for (auto it : age) {
        cout << it.first << " is " << it.second << " years old." << endl;
    }

    return 0;
}
```

## 🔹 Common Use Cases

* Counting frequencies (like word count).
* Storing data with fast lookup by key.
* Implementing dictionary-type problems.

## 🔹 Comparison with `unordered_map`

| Feature        | map            | unordered\_map  |
| -------------- | -------------- | --------------- |
| Ordering       | Sorted by key  | No ordering     |
| Implementation | Red-Black Tree | Hash Table      |
| Lookup time    | O(log n)       | O(1) on average |
| Memory         | More           | Less            |

## 🔹 Tips

* Use `map` when **order matters**.
* Use `unordered_map` for **faster access** when order is not required.

---

This is a fundamental STL container used widely in C++ for efficient data storage and retrieval based on unique keys.
