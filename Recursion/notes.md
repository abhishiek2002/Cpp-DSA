# 📘 Recursion in C++

---

## 🔁 What is Recursion?

**Recursion** is a process where a **function calls itself** directly or indirectly to solve a smaller instance of the same problem.

It’s like breaking a big task into smaller sub-tasks of the same type.

```md
`Mtlb -> Mtlb recursion hum tab use krte hain jab ek problem ka solution depend kre y solve kiya jaa sake usi type ki chhoti problem se`
  1. factorial of n = n * factorial of (n-1)
  2. powerOf2(n)  = (n%2 == 0) ? powerOf2(n/2)*powerOf2(n/2) : 2*powerOf2(n/2)*powerOf2(n/2);
```

---

## ♻ Structure of a Recursive Function

A recursive function has two main parts:

1. **Base Case** – Condition where the function stops calling itself.
2. **Recursive Case** – The function calls itself with a smaller sub-problem.

### 🧠 General Syntax:

```cpp
returnType functionName(parameters) {
    if (base_condition) {
        return some_value;  // Base case
    } else {
        return functionName(smaller_problem);  // Recursive case
    }
}
```

---

## 🔍 Example 1: Factorial of a Number

**Factorial Formula:**
`n! = n * (n-1)!`
And `0! = 1` (Base case)

### ✅ Code:

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;  // Base Case
    return n * factorial(n - 1);  // Recursive Call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
```

### 📊 Stack Visualization for `factorial(3)`

```
factorial(3)
-> 3 * factorial(2)
      -> 2 * factorial(1)
            -> 1 * factorial(0)
                  -> 1  (base case)
Result: 3 * 2 * 1 * 1 = 6
```

---

## ♻ Example 2: Fibonacci Series

**Fibonacci Formula:**
`fib(n) = fib(n-1) + fib(n-2)`
`fib(0) = 0`, `fib(1) = 1`

### ✅ Code:

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 6;
    cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;
    return 0;
}
```

### ⚠️ Note:

Fibonacci recursion is simple but inefficient for large `n` due to **repeated calls**. (Use memoization or iteration instead.)

---

## ♻ Example 3: Sum of First N Natural Numbers

### ✅ Code:

```cpp
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) return 0;  // Base case
    return n + sum(n - 1); // Recursive call
}

int main() {
    int n = 5;
    cout << "Sum of first " << n << " numbers is: " << sum(n) << endl;
    return 0;
}
```

---

## 🧙‍♂️ Types of Recursion

| Type                   | Description                                    | Example            |
| ---------------------- | ---------------------------------------------- | ------------------ |
| **Tail Recursion**     | Recursive call is the **last statement**       | `printNumbers(n)`  |
| **Head Recursion**     | Recursive call is **first, then work is done** | `factorial(n)`     |
| **Tree Recursion**     | Function makes **multiple recursive calls**    | `fibonacci(n)`     |
| **Indirect Recursion** | Function A calls B, and B calls A              | `funA() -> funB()` |

---

## ♻ Example 4: Tail Recursion

```cpp
void printTail(int n) {
    if (n == 0) return;
    cout << n << " ";
    printTail(n - 1);  // Recursive call is last
}
```

## ♻ Example 5: Head Recursion

```cpp
void printHead(int n) {
    if (n == 0) return;
    printHead(n - 1);  // Recursive call is first
    cout << n << " ";
}
```

---

## 📌 When to Use Recursion?

✅ Suitable when:

* Problem can be broken into smaller, identical problems
* You don't mind extra memory (function call stack)

🚫 Avoid when:

* Time or space efficiency is critical (use loop or dynamic programming)

---

## 🧠 Key Points to Remember

* Every recursive function **must have a base case**.
* Without a base case, recursion causes a **stack overflow**.
* Recursion uses **call stack** internally.
* Some problems (like tree traversal, backtracking) are naturally recursive.

---

## 📝 Summary

| Term           | Meaning                                       |
| -------------- | --------------------------------------------- |
| Base Case      | Condition when recursion stops                |
| Recursive Case | Function calls itself with smaller problem    |
| Stack          | Recursion uses function call stack internally |
| Tail Recursion | No pending operations after recursive call    |

---
