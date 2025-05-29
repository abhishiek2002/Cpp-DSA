# Character Arrays & String

# Mastering Character Arrays & Strings in C++ (80/20 Rule)

This guide covers the **20% of concepts** in **Character Arrays & Strings** in C++ that will give you **80% of the value** for most coding problems and interviews.

---

## 🔹 1. What is a Character Array?

A **character array** is a sequence of characters stored in contiguous memory, ending with a **null character `\0`**.

```cpp
char name[6] = {'A', 'l', 'i', 'c', 'e', '\0'};
```

OR simply:

```cpp
char name[] = "Alice";  // Automatically adds \0
```

---

## 🔹 2. Input/Output with Character Arrays

```cpp
char str[100];
cin >> str;  // Stops at space
cin.getline(str, 100);  // Reads full line
```

---

## 🔹 3. String Functions from `<cstring>`

```cpp
#include <cstring>
```

| Function       | Description                    |
| -------------- | ------------------------------ |
| `strlen(str)`  | Returns length (not incl. \0)  |
| `strcpy(a, b)` | Copies string `b` into `a`     |
| `strcat(a, b)` | Concatenates `b` to end of `a` |
| `strcmp(a, b)` | Compares strings (0 if equal)  |

Example:

```cpp
char a[100] = "Hello ";
char b[] = "World";
strcat(a, b);  // a becomes "Hello World"
```

---

## 🔹 4. What is a `string` (STL)?

C++ STL provides a **`string` class** in `<string>` for easier manipulation.

```cpp
#include <string>

string s = "Hello";
s += " World";       // Concatenation
s.length();          // 11
s[0];                // 'H'
```

---

## 🔹 5. Input/Output with `string`

```cpp
string s;
cin >> s;           // Stops at space
getline(cin, s);    // Full line input
```

---

## 🔹 6. Useful String Methods

```cpp
string s = "abcdef";
s.substr(2, 3);     // "cde"
s.find("cd");       // 2
s.erase(2, 3);      // "abf"
s.insert(2, "xyz"); // "abxyzdef"
```

---

## 🔹 7. Convert Between String and Char Array

```cpp
// string to char[]
string s = "hello";
char ch[100];
strcpy(ch, s.c_str());

// char[] to string
char name[] = "world";
string str(name);
```

---

## 🔹 8. Common Interview Problems

| Problem              | Key Idea                         |
| -------------------- | -------------------------------- |
| Reverse a string     | Use two-pointer or reverse()     |
| Check for palindrome | Compare start and end characters |
| Remove duplicates    | Use set or check previous char   |
| Substring search     | `find()` or manual loop          |

---

## 🔹 9. Character Array vs. String (Comparison)

| Feature         | Char Array       | string (STL)            |
| --------------- | ---------------- | ----------------------- |
| Null terminated | Yes              | No                      |
| Safe & Flexible | No               | Yes                     |
| Functions       | From `<cstring>` | Methods from `<string>` |

---

## ✅ Conclusion (80/20 Rule)

Learn and master:

* Input/output using both char array & string
* Conversion between char\[] & string
* `strlen`, `strcpy`, `strcat`, `strcmp`
* String methods like `substr`, `find`, `insert`, `erase`
* Common string problems

With these skills, you’ll solve **most string-related problems in CP & interviews**.

---

