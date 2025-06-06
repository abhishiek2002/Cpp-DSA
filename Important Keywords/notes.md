# Important Keywords In C++ (Macros, Global Variables, Inline Functions, and Default Arguments in C++)
---

## 🧠 1. Macros in C++

Macros are **preprocessor directives** that define constant values or code snippets which are replaced by the preprocessor before compilation begins.

### 🔹 Syntax:
```cpp
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))
```

### 🔍 Characteristics:
- No type-checking.
- Evaluated at **compile-time** (before actual compilation).
- Used for **constants** or **code substitution**.
- Can lead to unexpected results due to lack of scope and parentheses.

### ⚠️ Disadvantages:
- **No debugging info.**
- **May cause side effects** if not written carefully (e.g., macro functions).

### ✅ Better alternative:
Use `const` or `constexpr` or inline functions instead.

```cpp
const double PI = 3.14159;
inline int max(int a, int b) { return (a > b ? a : b); }
```

---

## 🌐 2. Global Variables

Global variables are variables declared **outside all functions**, available **throughout the program**.

### 🔹 Example:
```cpp
int count = 0;  // global variable

void increment() {
    count++;
}
```

### ✅ Pros:
- Accessible by all functions.
- Useful for maintaining global state.

### ❌ Cons:
- Breaks **modularity**.
- Makes **debugging harder**.
- Can be **accidentally modified** by any part of the code.

### 🔒 Tip:
Use `static` for **file-level scope** or **namespace** to limit accessibility.

---

## ⚡ 3. Inline Functions

Inline functions are functions where the **function call is replaced** by the **function code** itself at compile time.

### 🔹 Syntax:
```cpp
inline int square(int x) {
    return x * x;
}
```

### 📌 Use Case:
- Very short functions (like one-liners).
- Avoid overhead of function call.

### ⚠️ Notes:
- It's a **suggestion to compiler**, not a command.
- Excessive use increases **code size** (binary bloat).
- Defined **in header files**.

---

## 🧩 4. Default Arguments

C++ allows function parameters to have **default values**, making them optional during calls.

### 🔹 Syntax:
```cpp
void greet(string name = "User") {
    cout << "Hello, " << name << endl;
}

int main() {
    greet();        // Hello, User
    greet("John");  // Hello, John
}
```

### 🔍 Rules:
- Must be specified **from right to left**.
- If one argument has default, **all to its right must have defaults too**.
- Specified **once**, usually in function declaration.

### ✅ Benefits:
- Reduces function overloading.
- Cleaner and more concise code.

---

## 📚 Summary Table

| Feature            | Purpose                                      | Limitation                          | Best Practice                      |
|--------------------|----------------------------------------------|-------------------------------------|------------------------------------|
| **Macros**         | Text substitution before compilation         | No type-safety, debugging issues    | Use `constexpr` or `inline`        |
| **Global Variables** | Shared variable accessible globally         | Reduces modularity, risk of bugs    | Minimize use, use namespaces       |
| **Inline Functions** | Replace call with code for small functions  | Code bloat on large functions       | Use for 1-2 liner functions         |
| **Default Arguments** | Provide default values for parameters      | Can confuse call if not used properly | Use only for trailing parameters |

---
